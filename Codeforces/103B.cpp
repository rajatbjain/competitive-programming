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

int n, m;
int g[123][123];
bool seen[123];

void dfs(int at) {
  seen[at] = true;
  for(int i = 1; i <= n; i++) {
    if(!seen[i] && g[at][i] == 1) {
      dfs(i);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    g[x][y] = g[y][x] = 1;
  }
  dfs(1);
  bool ok = true;
  for(int i = 1; i <= n; i++) {
    if(!seen[i]) ok = false;
  }
  if(ok && n == m) {
    cout << "FHTAGN!\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}
