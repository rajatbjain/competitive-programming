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

long long n, m;
long long height[100010];
long long h, at = 0;

int main() {
  scanf("%I64d", &n);
  for(int i = 1; i <= n; i++) {
    scanf("%I64d", height + i);
    height[i]--;
  }
  h = height[1];
  at = 1;
  scanf("%I64d", &m);
  for(int i = 1; i <= m; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    if(x <= at) {
      printf("%I64d\n", h + 1);
      h = h + (long long)y;
    } else {
      at = (long long) x;
      printf("%I64d\n", (h > height[x] ? (long long) h + 1 : (long long) height[x] + 1));
      if(h > height[x]) {
        h = h + y;
      } else {
        h = height[x] + y;
      }
    }
  }
}