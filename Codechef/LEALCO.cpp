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
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
#include <ctime>
#include <climits>

using namespace std;

bool willGetArrested(const vector< int > &a, const int &k, const int &m) {
  int sz = a.size();
  for(int i = 0; i <= sz - k; i++) {
    int to = i + k - 1;
    int f = a[i];
    for(int j = i; j <= to; j++) {
      f = max(f, a[j]);
    }
    int occur = 0;
    for(int j = i; j <= to; j++) {
      if(a[j] == f) occur++;
    }
    if(occur >= m) return true;
  }
  return false;
}

void solve() {
  int n, k, m;
  cin >> n >> k >> m;
  vector< int > a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = INT_MAX;
  int upto = 1 << n;
  for(int i = 0; i < upto; i++) {
    int cur = i;
    vector< int > tmp(a.begin(), a.end());
    int at = 0;
    int changes = 0;
    while(cur) {
      if((cur & 1) == 1) {
        tmp[at]++;
        changes++;
      }
      cur >>= 1;
      at++;
    }
    if(!willGetArrested(tmp, k, m)) {
      ans = min(changes, ans);
    }
  }
  if(ans == INT_MAX) {
    cout << -1 << endl;
  }
  else {
    cout << ans << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while(tt--) {
    solve();
  }
  return 0;
}