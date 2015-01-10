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

void housekeeping(bool local_mode) {
  ios_base::sync_with_stdio(false);
  if(local_mode)
    freopen("input.txt", "r", stdin);
}

int a[100010], ans;

int main() {
  housekeeping(false);
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int ans = min(2, n);
  int cnt = 2;
  for(int i = 3; i <= n; i++) {
    if(a[i] == a[i - 1] + a[i - 2]) cnt++;
    else cnt = 2;

    ans = max(ans, cnt);
  }

  cout << ans << endl;
}