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

inline bool feq(double a, double b) { return fabs(a-b) < 1e-9; }

using namespace std;

vector< vector< int > > dp(200, vector<int>(1000, 0));

bool range(int x) {
  return 0 <= x && x < dp[0].size();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int ff, ss;
  cin >> ff >> ss;
  int t, d;
  cin >> t >> d;
  dp[0][ff] = ff;

  for(int i = 0; i < t - 1; i++) {
    for(int j = 0; j < dp[i].size(); j++) {
      if(dp[i][j] > 0) {
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + j);
        for(int k = j - d; k != j; k++) {
          if(!range(k)) continue;
          dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + k);
        }
        for(int k = j + d; k != j; k--) {
          if(!range(k)) continue;
          dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + k);
        }
      }
    }
  }

  cout << dp[t - 1][ss] << endl;
  return 0;
}