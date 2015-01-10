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

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
}

int c[100010];

int main() {
  housekeeping();
  int n, x;
  cin >> n >> x;
  for(int i = 0; i < n; i++) cin >> c[i];
  sort(c, c + n);
  long long ans = 0;
  for(int i = 0; i < n; i++) {
    ans += (long long) c[i] * x;
    if(x > 1) {
      x--;
    }
  }
  cout << ans << endl;
}