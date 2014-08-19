#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <bitset>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>  
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

vector<int> f(256, 0);

int main() {
  string head, sub;
  getline(cin, head);
  getline(cin, sub);

  for(int i = 0 ; i < head.size(); i++) {
    if(head[i] == ' ') continue;
    else {
      ++f[head[i]];
    }
  } 

  for(int i = 0; i < sub.size(); i++) {
    if(sub[i] == ' ') continue;

    if(f[sub[i]] == 0) {
      cout << "NO\n";
      return 0;
    }
    else {
      --f[sub[i]];
    }
  }

  cout << "YES\n";
}