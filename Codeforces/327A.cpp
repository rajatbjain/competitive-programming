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

int n, a[123];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i)
    cin >> a[i];
  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = i; j <= n; ++j) {
      int tmp = 0;
      for (int k = 1; k <= n; ++k) {
        if (k >= i && k <= j) tmp += 1 - a[k]; else tmp += a[k];
      }
      ans = max(ans, tmp);
    }
  }
  printf("%d\n", ans);
  return 0;
}