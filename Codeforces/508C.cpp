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

int m, t, r;
bool busy[12345];
int burning[12345];
int ans = 0;

int main() {
  scanf("%d %d %d", &m, &t, &r);
  while(m--) {
    int visit;
    scanf("%d", &visit);
    visit += 310;
    int more = r - burning[visit];

    for(int light = 0, i = visit - 1; light < more && i >= 0; i--) {
      if(busy[i]) continue;

      busy[i] = true;
      ans++;
      for(int j = i; j <= i + t; j++) {
        burning[j]++;
      }
      light++;
    }
    if(burning[visit] != r) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << ans << endl;
}