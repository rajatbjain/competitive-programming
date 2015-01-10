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

int a[100010];
int ans = 99999999;
int n;

int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  int i, j;
  for(i = 1; i <= n; i++) {
    j = upper_bound(a + 1, a + n + 1, a[i] * 2) - a - 1;
    ans = min(i - 1 + n - j, ans);
  } 
  cout << ans << endl;
}