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

const long long N = (1 << 17) + 100;

long long t[4 * N];
long long a[N];
int height;

long long join(long long a, long long b, int c) {
  int x = height - c;
  if(x % 2) {
    return a ^ b;
  }
  else {
    return a | b;
  }
}

void build(int x, int l, int r, int c) {
  if(l == r) {
    t[x] = a[l];
  }
  else {
    int m = (l + r) >> 1;
    build(x + x, l, m, c + 1);
    build(x + x + 1, m + 1, r, c + 1);
    t[x] = join(t[x + x], t[x + x + 1], c);
  }
}   

void modify(int x, int l, int r, int at, int value, int c) {
  if(l == r) {
    t[x] = value;
    return;
  }
  int m = (l + r) >> 1;
  if(at <= m) {
    modify(x + x, l, m, at, value, c + 1);
  } 
  else {
    modify(x + x + 1, m + 1, r, at, value, c + 1);
  }
  t[x] = join(t[x + x], t[x + x + 1], c);
} 


int main() {
  int n, m;
  cin >> n >> m;
  height = n;
  n = 1 << n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  build(1, 1, n, 1);

  // for(int i = 1; i <= 10; i++) cout << t[i] << endl;

  for(int i = 0; i < m; i++) {
    int foo, bar;
    cin >> foo >> bar;
    modify(1, 1, n, foo, bar, 1);
    cout << t[1] << endl;
  }
}