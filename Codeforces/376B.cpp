/*
I always did something I was little not ready to do.
I think that's how you grow. When there's that moment 
of 'Wow, I am not really sure I can do this...' and
push through those moments, that's when you have a
BREAKTHROUGH.
*/

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
#pragma comment(linker, "/STACK:256000000")

using namespace std;

int n, e;
int g[1 << 7][1 << 7];

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n >> e;
  for(int i = 0; i < e; i++) {
    int x, y, w;
    cin >> x >> y >> w;
    g[x][y] = w;
  }
  
  int tmp = n;

  while(tmp--) {
    bool shifted = false;
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= n; j++) {
        for(int k = 1; k <= n; k++) {

          if(g[i][j] && g[j][k] && i == k) {
            if(g[i][j] == g[j][k]) g[i][j] = g[j][k] = 0;
            if(g[i][j] > g[j][k]) {
              g[i][j] -= g[j][k];
              g[j][k] = 0;
            } else {
              g[j][k] -= g[i][j];
              g[i][j] = 0;
            }
            shifted = true;
            continue;
          }

          if(g[i][j] && g[j][k]) {
            int x = g[i][j] < g[j][k] ? g[i][j] : g[j][k];
            g[i][j] = max(0, g[i][j] - x );
            g[j][k] = max(0, g[j][k] - x);
            g[i][k] += x;
            shifted = true;
          }
        }
      }
    }
    if(!shifted) break;
  }

  int ans = 0;

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      ans += g[i][j];
    }
  }

  cout << ans << endl;

}