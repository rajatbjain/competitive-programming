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

int n;
long long a[123456];
long long need[123456];
long long ans[123456];

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 1; i < n; i++) {
    if(need[i - 1] + a[i - 1] > a[i]) {
      need[i] = need[i - 1] + a[i - 1] - a[i];
    }
  }
  for(int i = 1; i < n; i++) {
    ans[i] = max(0LL, need[i] - need[i - 1]);
  }
  for (int i = 1; i < n; i++) ans[i] += ans[i - 1];
  cout << ans[n - 1] << endl;
  return 0;
}
