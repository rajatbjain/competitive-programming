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

int a[110][110];
int b[110][110];
int c[110][110];
int n, m;

void traverse(int x, int y, int fill) {
  for(int i = 1; i <= m; i++) {
    b[x][i] = fill;
  }
  for(int i = 1; i <= n; i++) {
    b[i][y] = fill;
  }
}

void mark(int x, int y) {
  for(int i = 1; i <= m; i++) {
    c[x][i] = 1;
  }
  for(int i = 1; i <= n; i++) {
    c[i][y] = 1;
  }
}

int main() {
  cin >> n >> m;
  memset(b, -1, sizeof(b));
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      if(a[i][j] == 1) {
        b[i][j] = b[i][j] == -1 ? 1 : 0;
      }
      else {
        traverse(i, j, 0);
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      if(b[i][j] == 1) {
        mark(i, j);
      }
    }
  }

  // for(int i = 1; i <= n; i++) {
  //   for(int j = 1; j <= m; j++) {
  //     cout << b[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  bool ok = true;

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      if(c[i][j] != a[i][j]) ok = false;
    }
    if(ok == false) {
      cout << "NO\n";
      return 0;
    }
  }


  cout << "YES\n";

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }

}