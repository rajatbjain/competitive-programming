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

int n;
vector< pair< int, int > > id;
vector< int > g[123];
bool seen[123];

bool range(const pair< int, int > &u, const pair< int, int > &v) {
  bool x = u.first < v.first and v.first < u.second;
  bool y = u.first < v.second and v.second < u.second;
  return x || y;
}

bool dfs(int s, int e) {
  if(s == e) return true;
  bool found = false;
  for(int i = 0; i < g[s].size(); i++) {
    if(!seen[g[s][i]]) {
      seen[g[s][i]] = true;
      found = found | dfs(g[s][i], e);
    }  
  }
  return found;
}

int main() {
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    int qq, x, y;
    scanf("%d %d %d", &qq, &x, &y);
    if(qq == 1) {
      for(int i = 0; i < (int) id.size(); i++) {
        if(range(id[i], make_pair(x, y))) {
          g[id.size() + 1].push_back(i + 1);
        }
        if(range(make_pair(x, y), id[i])) {
          g[i + 1].push_back(id.size() + 1) ;
        }
      }
      id.push_back(make_pair(x, y));
    }
    else {
      if(dfs(x, y)) {
        puts("YES");
      }
      else {
        puts("NO");
      }
      for(int i = 0; i < 123; i++) seen[i] = false;
    }      
  }
  return 0;
}