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

int a[1234][1234];
int n, m, k;

bool range(int x, int y) {
  if(1 <= x && x <= n && 1 <= y && y <= m) return true;
  else return false;
}

bool check(int x, int y) {
  if(range(x + 1, y) && range(x, y + 1) && range(x + 1, y + 1) && a[x + 1][y] == 1 && a[x][y + 1] == 1 && a[x + 1][y + 1] == 1) return true;
  else if(range(x - 1, y) && range(x - 1, y + 1) && range(x, y + 1) && a[x - 1][y] == 1 && a[x - 1][y + 1] == 1&& a[x][y + 1] == 1) return true;
  else if(range(x, y - 1) && range(x + 1, y) && range(x + 1, y - 1) && a[x][y - 1] == 1 && a[x + 1][y] == 1 && a[x + 1][y - 1] == 1) return true;
  else if(range(x - 1, y) && range(x - 1, y - 1) && range(x, y - 1) && a[x - 1][y] && a[x - 1][y - 1] && a[x][y - 1]) return true;
  else return false;
}

int main() {
  cin >> n >> m >> k;
  for(int i = 0; i < k; i++) {
    int foo, bar;
    cin >> foo >> bar;
    a[foo][bar] = 1;
    if(check(foo, bar)) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << 0 << endl;
} 