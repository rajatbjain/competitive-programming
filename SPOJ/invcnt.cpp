#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <bitset>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int N;
int n;
int t[10000005];

void init(){
  memset(t, 0, sizeof(t));
}

void update(int i, int v) {
  while(i <= N) {
    t[i] += v;
    i += (i & -i);
  }
}

long long query(int i) {
  long long sum = 0;
  while(i > 0) {
    sum += t[i];
    i -= (i & -i);
  }
  return sum;
}

int main() {
  int tt;
  scanf("%d", &tt);
  while(tt--) {
    init();
    scanf("%d", &n);
    int a[n + 5];
    for(int i = 1; i <= n; i++) {
      scanf("%d", a + i);
      N = max(N, a[i]);      
    }
    long long cnt = 0;
    for(int i = n; i >= 1; i--) {
      int x = a[i];
      cnt += (long long) query(x);
      update(x, 1);
    }
    printf("%I64d\n", cnt);
  }
}