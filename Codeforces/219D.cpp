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

#define long long long
#define lld I64d

using namespace std;

const int N = 200010;
vector< int > w[N];
vector< int > g[N];
int cost[N];

int dfs1(int cur, int p) {
  int res = 0;
  int sz = g[cur].size();
  for(int i = 0; i < sz; i++) {
    if(g[cur][i] == p) continue;
    res += dfs1(g[cur][i], cur) + w[cur][i];
  }
  return res;
}

void dfs2(int cur, int p, int add) {
  cost[cur] = cost[p] + add;
  int sz = g[cur].size();
  for(int i = 0; i < sz; i++) {
    if(g[cur][i] == p) continue;
    if(w[cur][i] == 1) 
      dfs2(g[cur][i], cur, -1);
    else
      dfs2(g[cur][i], cur, 1);
  }
}

int main() {
  int n;
  cin >> n;
  for(int i = 1; i < n; i++) {
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    w[x].push_back(0);
    g[y].push_back(x);
    w[y].push_back(1);
  }
  cost[0] = dfs1(1, 0);
  dfs2(1, 0, 0);
  int ans = (int) 1e9;
  for(int i = 1; i <= n; i++) {
    if(ans > cost[i]) ans = cost[i];
  }
  cout << ans << "\n";
  for(int i = 1; i <= n; i++) {
    if(cost[i] == ans) {
      cout << i << " ";
    }
  }
  cout << "\n";
  return 0;
}