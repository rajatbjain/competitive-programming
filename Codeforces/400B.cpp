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

char a[1234][1234];
int g[1234], s[1234];

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++) 
    scanf("%s", a[i]);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(a[i][j] == 'G') g[i + 1] = j + 1;
      if(a[i][j] == 'S') s[i + 1] = j + 1;
    }
  }
  set< int > ans;  
  for(int i = 1; i <= n; i++) {
    if(s[i] < g[i]) {
      puts("-1");
      return 0;
    } 
    else {
      ans.insert(s[i] - g[i]);  
    }
  }  
  printf("%d\n", ans.size());
  return 0;
}