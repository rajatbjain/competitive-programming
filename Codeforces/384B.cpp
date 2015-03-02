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

int n, m, k;

int main() {
  scanf("%d %d %d", &n, &m, &k);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      int foo;
      scanf("%d", &foo);
    }
  }
  printf("%d\n", m * (m - 1) / 2);
  for(int i = 1; i <= m; i++) {
    for(int j = i + 1; j <= m; j++) {
      cout << (k == 1 ? j : i) << ' ' << (k == 1 ? i : j) << '\n';
    }
  }
  return 0;
}