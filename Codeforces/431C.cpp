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

int dp[123][123][2];
const int md = (int)1e9 + 7;
int n, k, d;

int solve(int x, int y, bool flag) {
  if(dp[x][y][flag] != -1) {
    return dp[x][y][flag];
  }  
  int res = 0;
  for(int i = 1; i <= k; i++) {
    if(i > y) break;
    res = (res + solve(i, y - i, flag | (i >= d ? true : false))) % md;
  }
  dp[x][y][flag] = res;
  return dp[x][y][flag];
}

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n >> k >> d;
  for(int i = 0; i < 123; i++)
    for(int j = 0; j < 123; j++) 
      for(int u = 0; u < 2; u++)
        dp[i][j][u] = -1;
  for(int i = 0; i < 123; i++) {
    dp[i][0][1] = 1;
  }
  int ans = 0;
  for(int i = 1; i <= k; i++) {
    if(i > n) break;
    ans = (ans + solve(i, n - i, (i >= d ? true : false))) % md;
  }
  cout << ans << endl;
  return 0;
}