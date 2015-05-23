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

const int N = 5000100;
long long dp[N], sieve[N];

void init() {
  for(int i = 2; i <= N; i++) {
    if (sieve[i] == 0) {
      sieve[i] = i;
      for (int j = i; j <= N; j += i) {
        sieve[j] = i;
      }
    }
  }
  sieve[1] = 1;
  for(int i = 2; i < N; i++) {
    dp[i] = 1 + dp[i / sieve[i]];
  }
  for (int i = 2; i < N; i++) {
    dp[i] += dp[i - 1];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  init();
  int tt;
  cin >> tt;
  while(tt--) {
    int a, b;
    cin >> a >> b;
    printf("%I64d\n", dp[a] - dp[b]);
  }  
  return 0;
}