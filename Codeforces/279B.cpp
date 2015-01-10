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

#define d(b) cout << #b << " " << b << endl;

int a[100010];
int n, t;

int main() {
  housekeeping();
  cin >> n >> t;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  int ans = 0, sum = 0, j = 0;
  for(int i = 0; i < n; i++) {
    while(sum + a[j] <= t && j < n) {
      sum += a[j], j++;
    }
    ans = max(ans, j - i);
    sum -= a[i];
  }
  cout << ans << endl;
} 