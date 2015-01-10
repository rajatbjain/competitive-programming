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

const int N = 500;
int a[N];
bool mark[N];
vector< int > g[N];

void mark_child(int x) {
  for(int y = 0; y < g[x].size(); y++) {
    if(mark[ g[x][y] ] == true) continue;
    mark[ g[x][y] ] = true;
    mark_child(g[x][y]);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  
  for(int i = 1; i <= n; i++) {
    scanf("%d", a + i);
  }
  
  for(int i  = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      char ch;
      cin >> ch;
      if(ch == '1') g[i].push_back(j);
    }
  }

  for(int i = 1; i <= n; i++) {
    mark_child(i);
    mark[i] = true;
    vector< int > s;
    for(int i = 1; i <= n; i++) {
      if(mark[i] == true) s.push_back(a[i]);
    }
    sort(s.begin(), s.end());
    for(int i = 1, j = 0; i <= n; i++) {
      if(mark[i] == true) {
        a[i] = s[j];
        j++;
      }
    }
    for(int i = 1; i <= n; i++) mark[i] = false;
  }

  for(int i = 1; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("%d\n", a[n]);
}