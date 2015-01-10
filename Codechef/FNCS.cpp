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
#define d(b) cout << #b << " " << b << endl;

using namespace std;

int N;
long long a[100010];
pair< int, int > f[100010];
long long bit_x[100010];
long long bit_y[100010];

void modify_y(int i, long long x) {
  while(i <= N) {
    bit_y[i] += x;
    i += (i & -i);
  }
}

long long get(long long i) {
  long long sum = 0;
  while(i >= 1) {
    sum += bit_y[i];
    i -= (i & -i);
  }
  return sum;
}

long long get_y(long long x, long long y) {
  d(x); d(y); d(get(y)); d(get(x - 1));
  return get(y) - get(x - 1);
}

long long get_x(long long x, long long y) {
  long long A = 0, B = 0;
  while(y) {
    d(y); d(f[y].first); d(f[y].second);
    A += get_y(f[y].first, f[y].second);
    y -= (y & -y);
  }
  x--;
  while(x) {
    B += get_y(f[x].first, f[x].second);
    x -= (x & -x);
  }
  return A - B;
}

int main() {
  scanf("%d", &N);
  for(int i = 1; i <= N; i++) {
    cin >> a[i];
    modify_y(i, a[i]);
  }

  for(int i = 1; i <= N; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    f[i].first = x;
    f[i].second = y;
  }

  d(get_x(1, 3));
  // for(int i = 1; i <= N; i++) {
  //   cout << get_y(1, 4) << endl;
  // }

  // int q;
  // scanf("%d", &q);
  // while(q--) {
  //   int c, x, y;
  //   scanf("%d %d %d", &c, &x, &y);
  //   if(x == 1) {
  //     long long old = a[x];
  //     a[x] = y;
  //     long long val = y - old;
  //     modify_y(x, val);
  //     modify_y(x + 1, -val);
  //   } else {
  //     cout << get_x(x, y) << endl;
  //   }
  // }
}