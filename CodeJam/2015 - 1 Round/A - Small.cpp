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

const int N = 1000100;
long long f[N];

long long rev(long long x) {
  long long ret = 0;
  while(x) {
    ret = ret * 10 + (x % 10);
    x /= 10;
  }
  return ret;
}

long long nextS(long long at) {
  long long ff = at + 1;
  long long ss = rev(at);
  long long tt = rev(ss);
  long long dd = rev(tt);
  return min(ff, max(ss, max(tt, dd)));
}

int main() {
  ios_base::sync_with_stdio(0);
  for (int i = 0; i < N; i++) f[i] = 99999999; 
  f[1] = 1;
  for (int i = 1; i <= 1000010; i++) {
    long long r = rev(i);
    if (r <= N)
      f[r] = min(f[r], f[i] + 1);
    f[i + 1] = min(f[i] + 1, f[i + 1]);
  }
  int tt;
  cin >> tt;
  for (int id = 1; id <= tt; id++) {
    long long n; 
    cin >> n;
    int c = 0;
    while (n >= 1) {
      long long r = rev(n);
      if (rev(r) == n) {
        // ok state
        long long rr = rev(r);
        if (rev(rr) == r) {
          // again ok
          n = min(rr, min(r, n - 1));
        }
        else {
          n = min(r, n - 1);
        }
      }
      else {
        n--;
      }
      c++;
    }
    cout << "Case #" << id << ": " << c << endl;
  }
  return 0;
}