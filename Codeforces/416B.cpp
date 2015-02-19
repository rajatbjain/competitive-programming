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

long long a[1234567][12];

int main() {
  ios_base::sync_with_stdio(0);
  int m, n;
  cin >> m >> n;
  for(int i = 1; i <= m; i++) {
    for(int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
  for(int i = 1; i <= m; i++) {                                       
    for(int j = 1; j <= n; j++) {
      a[i][j] = max( a[i][j] + a[i - 1][j], a[i][j] + a[i][j - 1]);
    }
  }
  for(int i = 1; i < m; i++) {
    cout << a[i][n] << " ";
  }
  cout << a[m][n] << endl;
  return 0;
}