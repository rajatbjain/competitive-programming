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

#define pb(x, w) g[x].push_back(w);

int ans = 9999;
vector< int > g[12345];
bool seen[12345];
int dist[12345];
int start, end;

inline void init() {
  for(int i = 0; i < 12345; i++) {
    g[i].clear();
  }
  memset(seen, false, sizeof seen);
  memset(dist, 0, sizeof dist);
}

void get_string(string &s, int a) {
  s = "0000";
  s[3] = a % 10 + '0';
  a /= 10;
  s[2] = a % 10 + '0';
  a /= 10;
  s[1] = a % 10 + '0'; 
  a /= 10;
  s[0] = a % 10+ '0';
}

int tonum(string s) {
  int n = 0;
  for(int i = 0; i < (int) s.size(); i++) {
    n = n * 10 + (s[i] - '0');
  }
  return n;
}

int add(int a, int x, int y, int z, int u) {
  string s;
  get_string(s, a);
  if(x == 1) s[0] = s[0] == '9' ? '0' : s[0] + 1;
  if(y == 1) s[1] = s[1] == '9' ? '0' : s[1] + 1;
  if(z == 1) s[2] = s[2] == '9' ? '0' : s[2] + 1;
  if(u == 1) s[3] = s[3] == '9' ? '0' : s[3] + 1;
  return tonum(s);
}

int sub(int a, int x, int y, int z, int u) {
  string s;
  get_string(s, a);
  if(x == 1) s[0] = s[0] == '0' ? '9' : s[0] - 1;
  if(y == 1) s[1] = s[1] == '0' ? '9' : s[1] - 1;
  if(z == 1) s[2] = s[2] == '0' ? '9' : s[2] - 1;
  if(u == 1) s[3] = s[3] == '0' ? '9' : s[3] - 1;
  return tonum(s);
}

void form(int x) {
  if(x == end || seen[x]) {
     return;
  }
  seen[x] = true;
  int w;
  w = add(x, 0, 0, 0, 1);
  pb(x, w);
  form(w);
  w = add(x, 0, 0, 1, 0);
  pb(x, w);
  form(w);
  w = add(x, 0, 1, 0, 0);
  pb(x, w);
  form(w);
  w = add(x, 1, 0, 0, 0);
  pb(x, w);
  form(w);
  w = sub(x, 0, 0, 0, 1);
  pb(x, w);
  form(w);
  w = sub(x, 0, 0, 1, 0);
  pb(x, w);
  form(w);
  w = sub(x, 0, 1, 0, 0);
  pb(x, w);
  form(w);
  w = sub(x, 1, 0, 0, 0);
  pb(x, w);
  form(w);
}

int bfs() {
  if(start == end) return 0;
  dist[start] = 0;
  queue< int > q;
  q.push(start);
  while(!q.empty()) {
    int x = q.front();
    q.pop();
    for(int i = 0; i < (int) g[x].size(); i++) {
      if(g[x][i] == end && !seen[g[x][i]]) {
        return dist[x] + 1; 
      }
      if(!seen[g[x][i]]) {        
        q.push(g[x][i]);
        dist[g[x][i]] = dist[x] + 1;
        seen[g[x][i]] = true;
      }
    }
    seen[x] = true;
  }
  return -1;
}

int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    init();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    start = a * 1000 + b * 100 + c * 10 + d;
    cin >> a >> b >> c >> d;
    end = a * 1000 + b * 100 + c * 10 + d;
    form(start);
    int dd;
    cin >> dd;
    memset(seen, 0, sizeof seen);
    while(dd--) {
      cin >> a >> b >> c >> d;
      int u = a * 1000 + b * 100 + c * 10 + d;
      seen[u] = true;
    }
    cout << bfs() << endl;
  }
}