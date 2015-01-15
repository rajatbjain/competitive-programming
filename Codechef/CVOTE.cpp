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

void solve() {
  int n;
  cin >> n;

  int high = 0, low = 0;

  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    high += foo;
    low += foo == 0 ? 0 : foo - 1;
  }

  if(low < 100 && 100 <= high) puts("YES");
  else puts("NO");
}

int main() {
  int tt;
  cin >> tt;
  while(tt--) solve();
}