#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

vector< bool > p(100100, 1);
int n, m;
int g[510][510];
int dx[510], dy[510];

void sieve() {
  p[0] = p[1] = false;
  for(int i = 2; i * i < 100100; i++) {
    if(p[i]) {
      for(int j = i * i; j < 100100; j += i) {
        p[j] = false;
      } 
    }
  }
}  

int dist(int n) {
  for(int i = n; i < 100100; i++) {
    if(p[i]) return i - n;
  }
  return 0;
}

int main() {
  sieve();
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      int foo;
      cin >> foo;
      foo = dist(foo);
      g[i][j] = foo;
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(i == 0) {
        dx[i] += g[i][j];
        dy[j] = g[i][j];
        continue;
      }
      dx[i] += g[i][j];
      dy[j] += g[i][j];
    }
  }

  int moves = 1e9;

    // for(int i = 0 ; i < n; i++) {
    //   for(int j = 0; j < m; j++) {
    //     cout << g[i][j] << " ";
    //   }
    //   cout << endl;
    // }

  for(int i = 0; i < n; i++) {
    moves = min(moves, dx[i]);
  }

  for(int i = 0; i < m; i++) {
    // cout << dy[i] << endl;
    moves = min(moves, dy[i]);
  }

  cout << moves << endl;

}