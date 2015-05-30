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

const int N = 200010;

int a[N], f[N];

int main() {
  ios_base::sync_with_stdio(0);
  int n, q;
  cin >> n >> q;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    f[l]++;
    f[r + 1]--;
  }
  for(int i = 1; i <= n; i++) {
    f[i] = f[i] + f[i - 1];
  }
  sort(a, a + n);
  sort(f + 1, f + n + 1);
  long long ans = 0;
  for(int i = n; i >= 1; i--) {
    long long value = a[i - 1];
    long long mul = f[i];
    ans += value * mul;
  }
  cout << ans << endl;
  return 0;
}