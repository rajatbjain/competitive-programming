#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>
  
using namespace std;

long long dp[301][1801][10];

const long long mod = (long long) 1e9 + 7;

void solve() {
  int runs, balls, wickets;
  cin >> runs >> balls >> wickets;
  int ans = 0;
  if(runs > 1800) {
    cout << 0 << endl;
    return;
  }
  for(int  i = 0 ; i <= wickets; i++) {
    ans = (ans + dp[balls][runs][i]) % mod;
  }
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  
  dp[0][0][0] = 1;
  for(int ball = 1; ball <= 300; ball++) {
    for(int run = 0; run <= 1800; run++) {
      for(int wicket = 0; wicket <= 9; wicket++) {
        dp[ball][run][wicket] = (dp[ball - 1][run][wicket]) % mod;
        if(run - 6 >= 0) {
          dp[ball][run][wicket] = (dp[ball][run][wicket] + dp[ball - 1][run - 6][wicket]) % mod;
        }
        if(run - 4 >= 0) {
          dp[ball][run][wicket] = (dp[ball][run][wicket] + dp[ball - 1][run - 4][wicket]) % mod;
        }
        if(wicket > 0) {
          dp[ball][run][wicket] = (dp[ball][run][wicket] + dp[ball - 1][run][wicket - 1]) % mod;
        }
      }
    }
  }
  int tt;
  cin >> tt;
  while(tt--) solve();
}