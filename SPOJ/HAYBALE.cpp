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

// Range Update and Point Query!

int n, k;
int a[1000010];
int b[1000010];

void incr(int i, int v) {
  while(i <= n) {
    a[i] += v;
    i = i + (i & -i);
  }
}

void update(int x, int y, int v) {
  incr(x, v);
  incr(y + 1, -v);
}

int sum(int i) {
  int r = 0;
  for(; i > 0; i -= (i & -i)) {
    r += a[i];
  }
  return r;
}

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 0; i < k; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    update(x, y, 1);
  }
  for(int i = 1; i <= n; i++) {
    b[i] = sum(i);
  }
  sort(b + 1, b + n + 1);
  printf("%d\n", b[n / 2 + 1]);
}