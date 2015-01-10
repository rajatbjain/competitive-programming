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

long long x[1010], y[1010];

long long dist(long long x, long long y) {
  if(x == 0) return abs(y);
  else if(y == 0) return abs(x);

  if(x > 0 && y > 0) {
    if(x > y) swap(x, y);
    return y - x;
  }
  else if(x < 0 && y < 0) {
    x = abs(x); y = abs(y);
    if(x > y) swap(x, y);
    return y - x;
  }
  else if(x < 0 && y > 0) {
    return y - x;
  }
  else if(x > 0 && y < 0) {
    return x - y;
  }
}

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  sort(x, x + n); sort(y, y + n);

  long long xx = dist(x[n - 1], x[0]);
  long long yy = dist(y[n - 1], y[0]);

  if(xx == 0 && yy == 0) {
    cout << 0 << endl;
    return 0;
  }

  if(xx == 0) {
    xx = yy;
  }
  if(yy == 0) {
    yy = xx;
  }

  long long f = max(xx, yy);

  cout << f * f << endl;

}