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

int main() {
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  long long cur = 0;
  int p = 0;
  long long curMax = 0, lastSent = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    cur -= (a - p);
    if (cur < 0) cur = 0;
    cur += b;
    if (cur > curMax) curMax = cur;
    p = a;
  }
  cout << cur + p << " " << curMax << endl;
  return 0;
}
