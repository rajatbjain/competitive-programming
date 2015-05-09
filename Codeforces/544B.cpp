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

void print(int x, int n) {
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
          cout << (x > 0 ? "L" : "S");
          x--;
        }
        else cout << "S";
      }
    else 
      for (int j = 0; j < n; j++) {
          if (j % 2 == 0) cout << "S";
          else {
            cout << (x > 0 ? "L" : "S");
            x--;
          }
      }
    cout << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  int n, req;
  cin >> n >> req;
  int nn = n * n;
  int can = nn / 2 + (nn & 1);
  if (can >= req) {
    cout << "YES\n";
    print(req, n);
  }
  else {
    cout << "NO\n";
  }
  return 0;
}