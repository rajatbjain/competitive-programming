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

bool ok;

vector< int > g[250];
int color[250]; 

void init() {
  ok = true;
  for(int i = 0; i < 250; i++) g[i].clear();
  memset(color, 0, sizeof(color));
}

int change(int &color) {
  if(color == 1) return 2;
  else return 1;
}

void dfs(int x, int c) {
  if(color[x]) return; 
  
  color[x] = c;
  
  for(int i = 0; i < (int) g[x].size(); i++) {
    int v = g[x][i];
    if(!color[v]) {
      dfs(v, change(c));
    }
  }
}

int main() {
  while(1) {
    init();
    int n, e;
    scanf("%d", &n);
    if(n == 0) return 0;
    scanf("%d", &e);
    for(int i = 0; i < e; i++) {
      int x, y;
      scanf("%d %d", &x, &y);
      g[x].push_back(y);
      g[y].push_back(x);
    }
    dfs(0, 1);

    for(int i = 0; i < n; i++) {
      int in = color[i];
      for(int j = 0; j < (int) g[i].size(); j++) {
        int out =  color[g[i][j]];
        if(in == out) {
          ok = false;
          break;
        }
      }
      if(!ok) break;
    }

    puts(ok ? "BICOLORABLE." : "NOT BICOLORABLE.");
  }
}