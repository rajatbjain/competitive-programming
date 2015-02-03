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

vector< int > g[123][123];

bool bfs(int color, int start, int end) {
  int seen[123][123];
  for(int i = 0; i < 123; i++) for(int j = 0; j < 123; j++) seen[i][j] = 0;
  queue<int> q;
  q.push(start);
  while(!q.empty()) {
    int u = q.front();
    q.pop();
    for(int i = 0; i < g[color][u].size(); i++) {
      int v = g[color][u][i];
      if(!seen[u][v]) {
        seen[u][v] = 1;
        if(v == end) {
          return true;
        }
        q.push(v);
      }
    }
  }
  return false;
}


int main() {
  int n, m;
  cin >> n >> m;
  for(int i = 1; i <= m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    g[c][a].push_back(b);
    g[c][b].push_back(a);
  }
  int qq;
  cin >> qq;
  
  while(qq--) {
    int u , v;
    cin >> u >> v;
    int cnt = 0;
    for(int i = 1; i<= m; i++) {
      if(bfs(i, u, v)) cnt++;
    }
  
    cout << cnt << endl;
  }
}