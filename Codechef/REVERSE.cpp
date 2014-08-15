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

const long long MAX = 987654321;

vector < int > G[1000000];
vector < int > rr;
int n, e;

void bfs() {
  queue< int > Q;
  Q.push(1);
  rr.resize(n+10, MAX);
  rr[1] = 0;
  while(!Q.empty()) {
    int u = Q.front();
    Q.pop();

    for(int i = 0; i < G[u].size(); i++) {
      int v = G[u][i];
      if(v < 0) {
        if(rr[-v] > rr[u] + 1) {
          rr[-v] = rr[u] + 1;
          Q.push(-v);
        }
      }
      else {
        if(rr[v] > rr[u]) {
          rr[v] = rr[u];
          Q.push(v);
        }
      }
    }
  }
}


int main() {
  cin >> n >> e;
  for(int i = 0; i < e; i++) {
    int u, v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(-u);
  }

  bfs();

  if(rr[n] >= MAX) cout << "-1\n";
  else cout << rr[n] << endl;
}