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

vector< int > g[3010];
int n, m;
bool edge[3010][3010];

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int to, from;
    cin >> from >> to;
    g[from].push_back(to);
    edge[from][to] = 1;
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      long long has = 0;
      if (i == j) continue;
      int sz = g[i].size();
      for (int at = 0; at < sz; at++) {
        if (edge[g[i][at]][j] && g[i][at] != i && g[i][at] != j) {
          has++;
        }
      }
      ans += has * 1LL * (has - 1) / 2;
    }
  }  
  cout << ans << endl;
  return 0;
}
