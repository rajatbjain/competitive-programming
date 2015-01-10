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

int a[26], b[26];

int main() {
  string s, t;
  cin >> s >> t;
  for(int i = 0; i < (int) s.size(); i++) {
    a[s[i] - 'a']++; 
  }
  for(int i = 0; i < (int) t.size(); i++) {
    b[t[i] - 'a']++;
  }
  int ans = 0;
  for(int i = 0; i < 26; i++) {
    if(a[i] == 0 && b[i] > 0) {
      cout << -1 << endl;
      return 0;
    }
    ans += min(a[i], b[i]);
  }
  cout << ans << endl;
}