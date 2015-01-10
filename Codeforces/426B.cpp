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

int n, m;
int a[123][123];

bool check() {
  for(int i = 1, j = n; i < j; i++, j--) {
    for(int k = 1; k <= m; k++) {
      if(a[i][k] != a[j][k]) return false;
    }
  }
  return true;
}
 
int main() {
  scanf("%d %d", &n, &m);
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      scanf("%d", a[i] + j);
    }
  }

  while(true) {
    bool ok = check();
    if(ok && !(n % 2)) n /= 2;
    else break;
  }

  cout << n << endl;
}