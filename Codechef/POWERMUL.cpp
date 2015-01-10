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

#define d(b) cout << #b << " " << b << endl;

long long a[100010];

long long modular(long long a, long long n, long long md) {
  long long ans = 1;
  while(n) {
    if(n & 1) ans = (ans % md * a % md) % md;
    a = ((a % md) * (a % md)) % md;
    n = n / 2;
  }
  return ans % md;
}

long long modx(long long a, long long b, long long md, long double u) {
  long long ans = a * u;
  for(int i = 0; i < b - 1; i++) {
    ans = (ans % md * a % md) % md;
  }
  return ans;
}

void construct(int n, int m) {
  a[0] = 1;
  for(int i = 1, j = n; i <= j; i++, j--) {
    long double y = pow(i, -i);
    long long x = modx(j, j, m, y);
    a[i] = (a[i - 1] % m * x % m) % m;
    // d(a[i]);
  }
}

int main() {
  // construct(5, 24);
  int tt;
  cin >> tt;
  while(tt--) {
    int n, m, q;
    cin >> n >> m >> q;
    construct(n, m);
    while(q--) {
      int r;
      scanf("%d", &r);
      if(n - r < r) r = n - r;
      cout << a[r] << endl;
    }
  }
}