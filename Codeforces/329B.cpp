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

char g[1234][1234];
int dist[1234][1234];
int seen[1234][1234];
int r, c;
pair< int, int > start, end;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

inline bool range(int x, int y) {
  if((x >= 0 && x < r) && (y >= 0 && y < c)) return true;
  else return false;
}

inline void add_seen(const pair< int, int > &a) {
  seen[a.first][a.second] = true;
}

inline void add_dist(const pair< int, int > &a, const pair< int, int > &b) {
  dist[b.first][b.second] = dist[a.first][a.second] + 1;
}

void flood_fill() {
  queue< pair< int, int > > q;
  q.push(end);
  while(!q.empty()) {
    pair< int, int > u = q.front();
    q.pop();
    add_seen(u);
    for(int id = 0; id < 4; id++) {
      int x = u.first + dx[id];
      int y = u.second + dy[id];
      if(!range(x, y)) continue;
      if(!seen[x][y] && g[x][y] != 'T') {
        add_dist(u, make_pair(x, y));
        q.push(make_pair(x, y));
        add_seen(make_pair(x, y));
      }
    }
  }
}

int main() {

  memset(dist, -1, sizeof dist);

  cin >> r >> c;
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cin >> g[i][j];
      if(g[i][j] == 'E') {
        end.first = i;
        end.second = j;
      }
      if(g[i][j] == 'S') {
        start.first = i;
        start.second = j;
      }
    }
  }

  flood_fill();
  
  int req = dist[start.first][start.second];
  int cnt = 0;

  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      if(dist[i][j] == -1) continue;
      if(g[i][j] > '0' && g[i][j] <= '9' && dist[i][j] <= req) {
        cnt += g[i][j] - '0';
      }

    }
  }

  cout << cnt << endl;

}