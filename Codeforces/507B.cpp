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
  long long r, x, y, xx, yy;

  cin >> r >> x >> y >> xx >> yy;

  long long steps = 0;
  long long tmp = (xx - x) * (xx - x) + (yy - y) * (yy - y);
  long double dist = sqrt(tmp * 1.0);

  while( dist > 0 ) {
    dist -= 2 * r;
    steps++;
  }

  cout << steps << endl;
}