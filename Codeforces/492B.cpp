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

int a[1010];

int main() {
  int n, l;
  cin >> n >> l;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  double d = max(a[0] - 0, l - a[n - 1]);
  for(int i = 0; i < n - 1; i++) {
    d = max(d, (a[i + 1] - a[i]) * 0.5);
  }
  printf("%.11lf\n", d);
}