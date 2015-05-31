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

long long sum[2000100];

int get(int base, int ex) {
  if(ex == 0) return 1;
  if(ex == 1) return base;
  int foo = ex & 1 ? base : 1;
  int ret = get(base, ex / 2);
  return ret * ret * foo;
}

int main() {
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  vector< int > a;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  sort(a.rbegin(), a.rend());
  sum[0] = a[0];
  for(int i = 1; i < n; i++) {
    sum[i] = sum[i - 1] + a[i];
  }
  long long ans = 0;
  for(int i = 0; ; i++) {
    int c = get(4, i);
    if(c > n) break;
    ans += sum[c - 1];
  }
  cout << ans << endl;
  return 0;
}