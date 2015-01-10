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
int has[1010];

int main() {
  // size_t t1 = clock();
  cin >> n >> k;

  if(n * (n - 1) / 2 < k * n) {
    cout << -1 << endl;
    return 0;
  } 

  cout << k * n << endl;

  for(int i = 1; i <= n; i++) {
    int x = k;
    for(int j = i + 1; j <= n; j++) {
      if(x > 0) {
        if(has[i] >= k) continue;
        printf("%d %d\n", i, j);
        has[i]++;
        x--;
      }
      else {
        if(has[j] >= k) continue;
        printf("%d %d\n", j, i);
        has[j]++;
        x--;
      }
    }
  }

  // size_t t2 = clock();
  // printf("\n\nTook %.3f secs\n\n", (double)(t2 - t1)/CLOCKS_PER_SEC);
}