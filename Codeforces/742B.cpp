#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <unordered_map>
#include <numeric>
#include <stack>
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector< long long > v(200500, 0);

  long long ans = 0;

  for(int i = 0; i < n; i++) {
    int cur;
    cin >> cur;
    ans += v[x ^ cur];
    v[cur]++;
  }

  cout << ans << endl;
  return 0;
}
