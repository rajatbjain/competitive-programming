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

long long a[200010];
long long b[200010];
long long x = -9999999999, y = 0;

#define d(b) cout << #b << " " << b << endl  

int main() {
  int n, m;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  cin >> m;
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(b, b + m);
  // i = 2, n - i = 3 && m - pos = 3, pos = 2
  for(int i = 0; i <= n; i++) {
    int pos = lower_bound(b, b + m, a[i]) - b;
    long long u = (i) * 2LL + (n - i) * 3LL;
    long long v = pos * 2LL + (m - pos) * 3LL;
    if(y - x > v - u) {
      x = u;
      y = v;
    }
  }

  long long w = 2 * n;
  long long z = 2 * m;
  // cout << x << ":" << y << endl;
  if(y - x > z - w) {
    x = w;
    y = z;
  }

  cout << x  << ":" << y << endl;
}