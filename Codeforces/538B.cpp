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

vector< int > v;
int dp[1000100], took[1000100];

void go (int cur) {
  if (cur > 1000000) return;
  v.push_back(cur);
  go(cur * 10);
  go(cur * 10 + 1);
}

int main() {
  ios_base::sync_with_stdio(0);
  v.push_back(0);
  go(1);
  sort(v.begin(), v.end());
  int n;
  cin >> n;
  dp[0] = 0;
  for (int i = 1; i <= 1000000; i++) dp[i] = (int) 1e7;
  for (int cur : v) {
    for (int i = 1; i <= n; i++) {
      if (cur > i) continue;
      if (dp[i] > dp[i - cur] + 1) {
        dp[i] = dp[i - cur] + 1;
        took[i] = cur;
      } 
    }
  }
  cout << dp[n] << endl;
  while(n > 0) {
    cout << took[n] << " ";
    n -= took[n];
  }
  return 0;
}