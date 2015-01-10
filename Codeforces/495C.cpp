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

string s;
int a[100010];
int u;
int last_idx;
vector< int > ans;

int main() {
  cin >> s;

  for(int i = 0; i < (int) s.size(); i++) {
    if(s[i] == '(') u++;
    else if(s[i] == ')') u--;
    else if(s[i] == '#') {
      u--;
      last_idx = i;
    }

    if(u < 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  int v = 0;

  for(int i = 0; i < (int) s.size(); i++) {
    if(s[i] == '(') v++;
    else if(s[i] == ')') v--;
    else if(s[i] == '#') {
      if(last_idx == i) {
        v = v - (1 + u);
      }
      else {
        v--;
      }
    }
    if(v < 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  for(int i = 0; i < (int) s.size(); i++) {
    if(last_idx == i) {
      cout << 1 + u << endl;
      return 0;
    }
    if(s[i] == '#') cout << 1 << endl;
  }

}