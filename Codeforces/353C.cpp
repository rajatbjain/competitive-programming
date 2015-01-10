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

int n;
long long a[100010];
long long dp[100010], v[100010];

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int i = 1; i <= n; i++) v[i] = v[i - 1] + a[i];
  for(int i = 1; i <= n; i++) {
    char ch;
    cin >> ch;
    if(ch == '0') {
      dp[i] = dp[i - 1];
    }
    else {
      dp[i] = max(dp[i - 1] + a[i], v[i - 1]);
    }
  }

  cout << dp[n] << endl;

}