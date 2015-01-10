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

int n, m;
char g[12][12];
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

bool check(int x, int y) {
  if((x >= 1 && x <= n) && (y >= 1 && y <= m)) return true;
  else return false; 
}

int main() {
  cin >> n >> m;
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      cin >> g[i][j];
    }
  }
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      if(g[i][j] == '.' || g[i][j] == 'P') continue;
      for(int id = 0; id < 4; id++) {
        int x = i + dx[id];
        int y = j + dy[id];
        if(!check(x, y)) continue;
        if(g[x][y] == 'P') {
          cnt++;
          g[x][y] = '.';
          break;
        }
      }
    }
  }


  cout << cnt << endl;
} 