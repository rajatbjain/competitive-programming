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

// Sweet mother of all there is good and pure, get accepted now.

set< int > s;
int a[123456];
int has[123456];
int n, k;
int x, y;

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; i++) {
    scanf("%d", a + i);
  } 
  for(int i = 1; i <= n; i++) {
    s.insert(a[i]);
    has[i] = s.size();
  }
  if(has[n] < k) {
    printf("-1 -1\n");
    return 0;
  }
  for(int i = 1; i <= n; i++) {
    if(has[i] == k) {y = i; break;}
  }
  s.clear();
  for(int i = y; i >= 1; i--) {
    s.insert(a[i]);
    has[i] = s.size();
  }
  for(int i = y; i >= 1; i--) {
    if(has[i] == k) {
      x = i;
      break;
    }
  }
  printf("%d %d\n", x , y);
  return 0;
}