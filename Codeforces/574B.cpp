#include <bits/stdc++.h>

using namespace std;

int n, m;
vector< int > g[4010];
bool adj[4010][4010];

int main() {
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
    adj[a][b] = true;
    adj[b][a] = true;
  }
  int least = INT_MAX;
  for(int at = 1; at <= n; at++) {
    int sz = g[at].size();
    for(int i = 0; i < sz; i++) {
      for(int j = i + 1; j < sz; j++) {
        if(adj[g[at][i]][g[at][j]] == true) {
          least = min(least, (int)g[g[at][i]].size() + (int)g[g[at][j]].size() + (int)g[at].size() - 6);
        }
      }
    }
  }
  if(least == INT_MAX) {
    cout << -1 << endl;
  }
  else {
    cout << least << endl;
  }
  return 0;
}