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

const int N = 1234567;
vector< pair< int, int > > points;
int n;
bool seen[N];
int ans = 0;
bool isA[N];

int get(int x, int y) {
  return x * 1001 + y;
}

void bfs(int a, int b) {
  queue< pair< int, int > > q;
  q.push(make_pair(a, b));
  while(!q.empty()) {
    a = q.front().first;
    b = q.front().second;
    seen[get(a, b)] = 1;
    q.pop();
    int sz = points.size();
    for(int i = 0; i < sz; i++) {
      int xx = points[i].first;
      int yy = points[i].second;
      if(!seen[get(xx, yy)] && (a == xx || b == yy)) {
        seen[get(xx, yy)] = 1;
        q.push(make_pair(xx, yy));
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    points.push_back(make_pair(x, y));
    isA[get(x, y)] = 1;
  }
  for(int i = 0; i <= 1000; i++) {
    for(int j = 0; j <= 1000; j++) {
      int at = get(i, j);
      if(!seen[at] && isA[at]) {
        ans++;
        bfs(i, j);
      }
    }
  }
  cout << ans - 1 << endl;
  return 0;
}
