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

int n, m, k;
long long prefix[5010];
long long sum[5010][5010];

int main() {
  cin >> n >> m >> k;
  for(int i = 0; i < n; i++) {
    int foo; cin >> foo;
    prefix[i + 1] = prefix[i] + foo;
  }
  for(int i = m; i <= n; i++) {
    for(int j = 1; j <= k; j++) {
      sum[i][j] = max(sum[i - 1][j], sum[i - m][j - 1] + prefix[i] - prefix[i - m]);
    }
  }
  cout << sum[n][k] << endl;
}