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

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector< int > a;
  a.push_back(0);
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  vector< vector<bool> > dp;
  dp.resize(n + 1);
  for(int i = 0; i < n + 1; i++) {
    dp[i].resize(m + 1, false);
  }
  dp[0][0] = 1;
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= m; j++) {
      if(dp[i - 1][j] == 1) {
        dp[i][j] = 1;
        // continue;
      }
      if(j - a[i] >= 0 && dp[i - 1][j - a[i]] == 1) {
        dp[i][j] = 1;
      }
    }
  }

  if(dp[n][m] == 1) {
    cout << "Yes\n";
  }
  else {
    cout << "No\n";
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