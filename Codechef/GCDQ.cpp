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

#define gc getchar
int read() {
  char c = gc();
  while(c < '0' || c > '9') c = gc();
  int ret = 0;
  while(c >= '0' && c <= '9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}


int a[100010];
int fwd[100010], bwd[100010];

inline int gcd(int a, int b) {
  while(b) {
    a = a % b;
    swap(a, b);
  }
  return a;
}

void solve() {

  int n, q;
  n = read(); q = read();
  
  for(int i = 1; i <= n; i++) {
    a[i] = read();
  }

  fwd[1] = a[1];
  bwd[n] = a[n];

  for(int i = 2; i <= n; i++) {
    fwd[i] = gcd(fwd[i - 1], a[i]);
  }

  for(int i = n - 1; i>= 0; i--) {
    bwd[i] = gcd(bwd[i + 1], a[i]);
  }

  while(q--) {
    int foo, bar;
    foo = read(); bar = read();
    
    if(foo == 1) {
      printf("%d\n", bwd[bar + 1]);
      continue;
    }

    if(bar == n) {
      printf("%d\n", fwd[foo - 1]);
      continue;
    }

    printf("%d\n", gcd(fwd[foo - 1], bwd[bar + 1]));
  }

}

int main() {
  int tt;
  scanf("%d", &tt);
  while(tt--) solve();
}