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

long long n, m, k;
long long screen[1234567];
long long index[1234567];
long long reverseidx[1234567];
long long ans = 0;

int main() {
  cin >> n >> m >> k;
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    index[foo] = i + 1;
    reverseidx[i + 1] = foo;
  }
  for(int i = 1, no = 1, f = k; i <= n; i++) {
    if(f) screen[i] = no, f--;
    else  screen[i] = ++no, f = k - 1;
  }
  for(int i = 1; i <= m; i++) {
    int foo;
    cin >> foo;
    int u = index[foo];     
    ans += screen[u];
    if(u != 1) {
      swap(reverseidx[u], reverseidx[u - 1]);
      index[reverseidx[u]] = u;
      index[reverseidx[u - 1]] = u - 1;
    }
  }
  cout << ans << endl;
  return 0;
}