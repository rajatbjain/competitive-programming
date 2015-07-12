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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int len;
  int a[3];
  cin >> len;
  for(int i = 0; i < 3; i++) {
    cin >> a[i];
  }
  vector< int > dp(len + 1, -1);
  dp[0] = 0;
  for(int at = 0; at <= len; at++) {
    for(int i = 0; i < 3; i++) {
      if(at >= a[i]) {
        int ls = dp[at - a[i]];
        if(ls == -1) continue;
        dp[at] = max(dp[at], 1 + ls);
      }
    }
  }
  cout << dp[len] << endl;
  return 0;
}