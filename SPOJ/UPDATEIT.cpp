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

int a[10010];
int n;

void incr(int i, int v) {
  while(i <= n) {
    a[i] += v;
    i += (i & -i);
  }
}

void update(int l, int r, int v){ 
  incr(l, v);
  incr(r + 1, -v);
}

int read(int i) {
  int sum = 0;
  while(i > 0) {
    sum += a[i];
    i -= (i & -i);
  }
  return sum;
}

int main() {
  int tt;
  scanf("%d", &tt);
  while(tt--) {
    memset(a, 0, sizeof(a));
    int u;
    scanf("%d %d", &n, &u);
    for(int i = 0; i < u; i++) {
      int l, r, v;
      scanf("%d %d %d", &l, &r, &v);
      update(l + 1, r + 1, v);
    }
    int q;
    scanf("%d", &q);
    for(int i = 0; i < q; i++) {
      int x;
      scanf("%d", &x);
      printf("%d\n", read(x + 1));
    }
  }
}