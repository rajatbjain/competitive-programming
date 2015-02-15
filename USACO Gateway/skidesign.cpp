/*
USER: rajat.r1
PROB: skidesign
LANG: C++
*/
#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>

using namespace std;

int a[1234];
int ans = (int)1e9;
int n;

int calc(int lower, int upper) {
  int ret = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] < lower) {
      int dif = lower - a[i];
      ret += dif * dif;
    } else if(a[i] > upper) {
      int dif = upper - a[i];
      ret += dif * dif;
    }
  }
  return ret;
}

int main() {
  freopen("skidesign.in", "r", stdin);
  freopen("skidesign.out", "w", stdout);
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int mid = a[n / 2 + n % 2];
  int l = mid - 17;
  int r = mid;
  int rMax = mid + 17;
  for( ; r <= rMax; r++, l++) {
    ans = min(ans, calc(l, r));
  }
  cout << ans << endl;
}