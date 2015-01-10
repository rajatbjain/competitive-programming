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

int n, x;
int ans, i = 1;

inline void solve(const int &l, const int &r) {
  ans += (l - i) % x;
  ans += r - l + 1;
  i = r + 1;  
}

int main() {
  cin >> n >> x;
  while(n--) {
    int l, r;
    cin >> l >> r;
    solve(l, r);
  }
  cout << ans << endl;
}