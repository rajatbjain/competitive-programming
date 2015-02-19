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

int n, m, k;
int a[1234][1234];
int rows[1234], cols[1234];

int main() {
  scanf("%d %d %d", &n, &m, &k);
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      scanf("%d", a[i] + j);
    }
  }
  for(int i = 1; i <= n; i++) rows[i] = i;
  for(int i = 1; i <= m; i++) cols[i] = i;
  while(k--){
    char qq;
    int x, y;
    scanf(" %c %d %d", &qq, &x, &y);
    if(qq == 'g') {
      printf("%d\n", a[rows[x]][cols[y]]);
    }
    else if (qq == 'r') { 
      int _x = rows[x];
      int _y = rows[y];
      rows[x] = _y;
      rows[y] = _x;
    }
    else if(qq == 'c') {
      int _x = cols[x];
      int _y = cols[y];
      cols[x] = _y;
      cols[y] = _x;
    }
   }
  return 0;
}