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

int main() {
  string s;
  cin >> s;
  s = '#' + s;
  int sz = s.size();
  vector< int > v(sz, 0);
  int ans = 0;
  for(int i = sz; i >= 1; i--) {
    if(i == 1) {
      if(v[i] == 1) s[i] = '0';
      s[i] == '1' ? ans += 0 : ans++;
    }
    else {
      if(v[i] == 0 and s[i] == '0') {
        ans++;
      }
      else if(v[i] == 0 and s[i] == '1') {
        v[i - 1] = 1;
        ans += 2;
      }
      else if(v[i] == 1 and s[i] == '0') {
        v[i - 1] = 1;
        ans += 2;
      }
      else if(v[i] == 1 and s[i] == '1') {
        v[i - 1] = 1;
        ans++;
      }
    }
  }   
  cout << ans << endl;
  return 0;
}