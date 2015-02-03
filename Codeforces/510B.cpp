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
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;

char a[123][123];
int seen[123][123];
int n, m;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
bool found = false;

bool inside(int x, int y) {
  if(1 <= x && x <= n && 1 <= y && y <= m) return true;
  else return false;
}

void dfs(int s, int e, int x, int y) {
  if( found == true ) {
    return;
  }
  for(int i = 0; i < 4; i++) {
    int u = x + dx[i];
    int v = y + dy[i];
    if(inside(u, v) && !seen[u][v] && a[u][v] == a[x][y]) {
      seen[u][v] = seen[x][y] + 1;
      if(u == s && e == v) {
        found = true;
        return;
      }
      dfs(s, e, u, v);
    }
  }
}

void print() {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      cout << seen[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      found = 0;
      memset(seen, 0, sizeof seen);
      seen[i][j] = 1;
      dfs(i, j, i, j);
      set< int > s;
      for(int x = 0; x < 4; x++) {
        int u = i + dx[x];
        int v = j + dy[x];
        if(inside(u, v) && seen[u][v] > 0) {

          s.insert(seen[u][v]);
        }
      }

      if(s.size() > 1) {
        puts("Yes");
        return 0;
      }
    }
  }
  puts("No");
  return 0;

}