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
char color;
char g[123][123];
const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};
int has[26];

inline bool range(int x, int y) {
  return (1 <= x && x <= n && 1 <= y && y <= m);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n >> m >> color;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> g[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (g[i][j] == color) {
        for (int at = 0; at < 4; at++) {
          int a = i + dx[at];
          int b = j + dy[at];
          if (!range(a, b)) continue;
          if ('A' <= g[a][b] && g[a][b] <= 'Z') {
            has[g[a][b] - 'A']++;
          }
        }
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < 26; i++) {
    if (color - 'A' == i) continue;
    if (has[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}
