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

vector< int > g[55];
int ans = 0;
bool seen[55];

void dfs(int x) {
  seen[x] = true;
  for(int i = 0; i < (int) g[x].size(); i++) {
    if(!seen[g[x][i]])
      dfs(g[x][i]);
  }
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    g[x].push_back(y);
    g[y].push_back(x);
  }
  int c = 0;
  for(int i = 1; i <= n; i++) {
    if(!seen[i]) {
      dfs(i);
      c++;
    }
  }
  long long ans = (long long) 1 << (n - c);
  cout << ans << endl;
}