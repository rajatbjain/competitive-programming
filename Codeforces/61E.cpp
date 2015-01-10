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

#define d(b) cerr << #b << " " << b << endl;

int n;
long long t[1000010];
int a[1000010], b[1000010];
long long inv[1000010];

void update(int i, int v) {
  while(i <= n) {
    t[i] += v;
    i += (i & -i);
  }
}

long long get(int i) {
  int sum = 0;
  while(i > 0) {
    sum += t[i];
    i -= (i & -i);
  }
  return sum;
}

int main() {
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    scanf("%d", a + i); 
    b[i] = a[i];
  }

  sort(b + 1, b + n + 1);

  for(int i = 1; i <= n; i++) {
    a[i] = lower_bound(b + 1, b + n + 1, a[i]) - b;
  }

  long long ans = 0;
  for(int i = 1; i <= n; i++) {
    cout << get(n) << "  " << get(a[i]) << endl;
    inv[i] = get(n) - get(a[i]);
    update(a[i], 1);
  }

  memset(t, 0, sizeof(t));
  
  for(int i = n; i >= 1; i--) {
    ans += inv[i] * get(a[i] - 1);
    update(a[i], 1);
  }
  cout << ans << endl;
}