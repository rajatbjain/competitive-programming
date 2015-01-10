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

int a[2010];

#define d(b) cout << #b << " " << b << endl;

int main() {
  // freopen("input.txt", "r", stdin);
  int n, k;
  cin >> n >> k;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);
  int L = n;
  long long ans = 0;
  for(int i = n - 1; i >= 0; i -= k) {
    // d(i); d(a[i]);
    ans += (abs(a[i] - 1)) * 2;
  }
  cout << ans << endl;

}