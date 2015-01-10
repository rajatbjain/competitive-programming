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

int f[4010];

int main() {
  int x, m;
  scanf("%d %d", &x, &m);
  f[x] = 1;
  for(int i = 0; i < m; i++) {
    int c;
    scanf("%d", &c);
    if(c == 1) {
      int tt, gg;
      scanf("%d %d", &tt, &gg);
      f[tt] = f[gg] = 1;
    }
    else {
      int tt;
      scanf("%d", &tt);
      f[tt] = 1;
    }
  }

  int Max = 0, Min = 0;


  for(int i = 1; i <= x; i++) {
    if(f[i]) continue;
    if(!f[i] && !f[i + 1]) Min++, Max += 2, f[i] = f[i + 1] = 1;
    else if(!f[i] && f[i + 1]) Min++, Max++, f[i] = 1;

  }

  cout << Min << " " << Max << endl;
}