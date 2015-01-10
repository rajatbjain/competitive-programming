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

long long N = 1000000000000000010;
vector < long long > f;

void init() {
  long long x = 2;
  while(x <= N) {
    f.push_back(x - 1);
    x <<= 1;
  }
}

long long solver(long long l, long long r) {
  if(l == r) return l;
  int x = upper_bound(f.begin(), f.end(), r) - f.begin();
  long long v = f[x - 1];
  if(v >= l && v <= r) return v;
  if(v < l) return (v + 1) + solver(l - v - 1, r - v - 1);
}

int main() {
  init();
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    long long foo, bar;
    cin >> foo >> bar;
    long long r = solver(foo, bar);
    cout << r << endl;
  }
}