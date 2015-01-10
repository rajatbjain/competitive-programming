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
#define d(b) cout << #b << " " << b << endl;

int n;
int maxn, ans;
int a[50010], dist[50010];
bool seen[50010];

void init() {
  memset(a, -1, sizeof(a));
  memset(seen, false, sizeof(seen));
  memset(dist, -1, sizeof(dist));
  maxn = -1;
}


int dfs(int u) {
  seen[u] = true;
  int x = 0;
  if(!seen[a[u]] && !(a[u] == -1))
      x = x + 1 + dfs(a[u]);
  seen[u] = false;
  return dist[u] = x;
}

int main() {
  int tt;
  int CASE = 0;
  scanf("%d", &tt);
  while(tt--) {
    init();
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
      int foo, bar;
      scanf("%d %d", &foo, &bar);
      a[foo] = bar;
    }

    for(int i = 1; i <= n; i++) {
      if(dist[i] == -1) dfs(i);
      if(dist[i] > maxn) {
        maxn = dist[i];
        ans = i;
      }
    }

    cout << "Case " << ++CASE << ": " << ans << endl;
  }
}