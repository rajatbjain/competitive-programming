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

int n, k;
int a[123];
int f[123][123];

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 0; i < n; i++) scanf("%d", a + i);   
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < a[i]; j++) {
      int u = j % k + 1;
      f[i][u]++;
    } 
  }
  for(int i = 1; i <= k; i++) {
    int MAX = 0, MIN = (int)1e6;
    for(int j = 0; j < n; j++) {
   //   cout << "for " << j << " color: " << i << " " << f[j][i] << "\n";
      MAX = max(MAX, f[j][i]);
      MIN = min(MIN, f[j][i]);
      if(abs(MAX - MIN) > 1) {
        printf("NO\n");
        return 0;
      }
    }
  }
  printf("YES\n");
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < a[i]; j++) {
      printf("%d ", j % k + 1);
    }
    printf("\n");
  }
  return 0;
}