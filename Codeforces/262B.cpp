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

int a[1234567];
           
int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for(int i = 0; i < n; i++) scanf("%d", a + i);
  int i;
  int ul = min(k, n);
  for(i = 0; i < ul; i++) {
    if(a[i] > 0) break;
    else {
      a[i] = -a[i];
    }
  }
  sort(a, a + n);
  k -= i;
  if(k > 0) {
    if(k % 2 == 1) {
      a[0] = -a[0];
    }  
  }
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += a[i];
  }
  printf("%d\n", sum);
  return 0;
}