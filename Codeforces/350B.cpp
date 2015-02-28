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
#define long long long;

using namespace std;

const int MAX = 100010;
int n;
int obj[MAX];
vector< int > path[MAX];
vector< int > best;
int indeg[MAX];
bool seen[MAX];

inline bool range(int x) {
  return (1 <= x && x <= n);
}

int main() {
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    scanf("%d", obj + i);
  }
  for(int i = 1; i <= n; i++) {
    int foo;
    scanf("%d", &foo);
    path[i].push_back(foo);
    indeg[foo]++;
  }
  for (int i = 1; i <= n; i++) {
    if(obj[i] == 1) {
      int cur = i;
      vector< int > ans;
      while (!seen[cur] && indeg[cur] <= 1 && range(cur)) {
        seen[cur] = true;
        ans.push_back(cur);
        if(path[cur].empty()) break;
        cur = path[cur][0];
      }
      if(ans.size() > best.size()) {
        best.clear();
        int sz = ans.size();
        for(int i = 0; i < sz; i++) {
          best.push_back(ans[i]);
        }
      }
    }
  }
  int sz = best.size();
  cout << sz << '\n';
  for(int i = sz - 1; i >= 0; i--) cout << best[i] << " ";
  cout << "\n";
  return 0;
}