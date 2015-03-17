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

int g[12][12][12];
int tmp[12][12][12];
int k, n, m;
int s, e;

struct p {
  int x, y, z;
  p(int xx, int yy, int zz) {
    x = xx;
    y = yy;
    z = zz;
  }
};

inline bool range(int x, int y, int z) {
  return (1 <= x && x <= n && 1 <= y && y <= m && 1 <= z && z <= k);
}

const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};

void bfs(int x, int y, int z) {
  queue< p > q;
  q.push(p(x, y, z));
  while(!q.empty()) {
    x = q.front().x;
    y = q.front().y;
    z = q.front().z;
    g[x][y][z] = 2;
    q.pop();
    for(int id = 0; id < 4; id++) {
      int u = dx[id] + x;
      int v = dy[id] + y;
      int w = z;
      if(!range(u, v, w) || g[u][v][w] == 2) continue;
      q.push(p(u, v, w));
      g[u][v][w] = 2;
    }
    if (range(x, y, z - 1) && g[x][y][z - 1] == 1) {
      q.push(p(x, y, z - 1));
      g[x][y][z] = 2;
    }
    if (range(x, y, z + 1) && g[x][y][z + 1] == 1) {
      q.push(p(x, y, z + 1));
      g[x][y][z] = 2;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin >> k >> n >> m;
  for(int i = 1; i <= k; i++) {
    for(int j = 1; j <= n; j++) {
      for(int l = 1; l <= m; l++) {
        char ch;
        cin >> ch;
        if(ch == '.') g[j][l][i] = 1;
        else if (ch == '#') g[j][l][i] = 2;
        else assert(false);
      }
    } 
  }
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      for(int l = 1; l <= k; l++) {
        tmp[i][j][l] = g[i][j][l];
      }
    }
  }
  cin >> s >> e;
  bfs(s, e, 1);
  int dif = 0;
  for(int i = 1; i <= n; i++) 
    for(int j = 1; j <= m; j++) 
      for(int l = 1; l <= k; l++) {
        if(tmp[i][j][l] == 1 && g[i][j][l] == 2) dif++;
      }
  cout << dif << endl;
  return 0;
}
