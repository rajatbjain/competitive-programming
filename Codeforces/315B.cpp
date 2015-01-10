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

int n, m, c = 0;
int a[100010];

int main() {
  housekeeping();
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++) scanf("%d", a + i);
  while(m--) {
    int tt;
    scanf("%d", &tt);
    if(tt == 1) {
      int x, y;
      scanf("%d %d", &x, &y);
      a[x - 1] = y - c;
    } 
    else if(tt == 2) {
      int x;
      scanf("%d", &x);
      c += x;
    } 
    else if(tt == 3) {
      int x;
      scanf("%d", &x);
      printf("%d\n", a[x - 1] + c);
    }
  }
}