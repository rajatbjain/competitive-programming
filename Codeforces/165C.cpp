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
#include <cassert>

using namespace std;

string s;
int k, n;
int a[1000100];

int main() {
  ios_base::sync_with_stdio(0);
  cin >> k;
  cin >> s;
  n = s.size();
  for(int i = 1; i <= n; i++) {
    a[i] = (s[i - 1] - '0');
  }
  for(int i = 1; i <= n; i++) {
    a[i] += a[i - 1];
  }
  long long ans = 0;
  for(int i = 1; i <= n; i++) {
    int req = k + a[i - 1];
    int ff = lower_bound(a + 1, a + n + 1, req) - a;
    ff = max(ff, i);
    int ss = upper_bound(a + 1, a + n + 1, req) - a;
    ans += (ss - ff > 0 ? ss - ff : 0);
  }
  cout << ans << endl;
  return 0;
}