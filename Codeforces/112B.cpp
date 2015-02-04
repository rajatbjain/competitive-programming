#include <cstdio>
#include <bitset>
#include <cassert>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>
#include <list>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int n, x, y;
  cin >> n >> x >> y;
  if(n == 2) {
    cout << "NO\n";
  }
  else {
    int u = n / 2;
    pair< int, int > a(u, u);
    pair< int, int > b(u + 1, u);
    pair< int, int > c(u, u + 1);
    pair< int, int > d(u + 1, u + 1);
    pair< int, int > f(x, y);
    if(f == a || f == c || f == b || f == d) {
      cout << "NO\n"; return 0;
    }
    cout << "YES\n";
  }
}