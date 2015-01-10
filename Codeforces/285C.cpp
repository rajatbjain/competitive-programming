#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

void housekeeping() {
  ios_base::sync_with_stdio(false);
  freopen("input.txt", "r", stdin);
}

// #define d(b) cout << #b << " " << b << endl;

long long a[300010];
int main() {
  housekeeping();
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  long long cnt = 0;
  for(int i = n; i >= 1; i--) {
    // d(i); d(a[i]);
    cnt += abs((long long) i - a[i]);
    // d(cnt);
  }
  cout << cnt << endl;
}