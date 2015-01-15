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

#define re read()
#define gc getchar_unlocked
int re {
  char c = gc();
  while(c < '0' || c > '9') c = gc();
  int ret = 0;
  while(c >= '0' && c <= '9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

long long up[100010], cash[100010];

void solve() {
  long long n, k;
  n = re; k = re; 
  
  for(int i = 0; i < n; i++) {
    up[i] = re;
  }

  for(int i = 0; i < n; i++) {
    cash[i] = re;
  }

  long long gain = -1;

  for(int i = 0; i < n; i++) {
    long long how = k / up[i];
    gain = max(how * cash[i], gain);
  }

  printf("%lld\n", gain);
}

int main() {
  int tt;
  tt = re;
  while(tt--) solve();
}