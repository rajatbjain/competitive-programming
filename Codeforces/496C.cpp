#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;

string s[123];
bool is[123];
int n, m;

void remove_from(int idx) {
  for(int i = 0 ; i < n; i++) {
    s[i].erase(s[i].begin() + idx);
  }
}

int main() {
  memset(is, false, sizeof is);
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  
  for(int i = 0; i < 150; i++) {
    for(int i = 1; i < n; i++) {
      if(s[i - 1] > s[i]) {
        for(int id = 0 ; id < (int) s[i].size(); id++) {
          if(s[i - 1][id] > s[i][id]) {
           remove_from(id);
           break;
          }
        }
      }
    }
  }
  cout << m - s[0].size() << endl;
}