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

class Scanner {
public:
  inline Scanner& operator >> (int &x) {
    scanf("%d", &x);
    return *this;
  }
  inline Scanner& operator >> (long long &x) {
    scanf("%I64d", &x);
    return *this;
  }
  inline Scanner& operator >> (string &s) {
    cin >> s;
    return *this;
  }
  inline Scanner& operator >> (double &x) {
    scanf("%lf", &x);
    return *this;
  }
  inline Scanner& operator >> (vector< int > &x) {
    const int upto = x.size();
    for(int i = 0; i < upto; i++) scanf("%d", &x[i]);
    return *this;
  }
  inline Scanner& operator >> (vector< long long > &x) {
    const int upto = x.size();
    for(int i = 0; i < upto; i++) scanf("%I64d", &x[i]);
    return *this;
  }
};

class Printer {
public:
  Printer() {}
  inline Printer& operator << (const int &x) {
    printf("%d", x);
    return *this;
  }
  inline Printer& operator << (const long long &x) {
    printf("%I64d", x);
    return *this;
  }
  inline Printer& operator << (const char &x) {
    printf("%c", x);
    return *this;
  }
  inline Printer& operator << (const string& x) {
    printf("%s", x.c_str());
    return *this;
  }
  inline Printer& operator << (const pair< int, int > &x) {
    printf("[ %d, %d ]\n", x.first, x.second);
    return *this;
  }
  inline Printer& operator << (const vector< int > &x) {
    const int n = x.size();
    printf("[ ");
    for(int i = 0; i < n; i++) printf("%d ", x[i]);
    printf("]");
    return *this;
  }
  inline Printer& operator << (const vector< long long > &x) {
    const int n = x.size();
    printf("[ ");
    for(int i = 0; i < n; i++) printf("%I64d ", x[i]);
    printf("]");
    return *this;
  }
  inline Printer& operator << (const set < int > &x) {
    printf("[ ");
    for( int e : x ) {
      printf("%d ", e);
    }
    printf("]");
    return *this;
  }
};
Scanner in = Scanner();
Printer out = Printer();

int n, m;
int cnt, sz;
int ans, other;
vector< int > g[123];
vector < bool > seen(123, false);

void dfs(int cur) {
  seen[cur] = true;
  cnt++;
  sz += g[cur].size();
  for( int v: g[cur]) {
    if(!seen[v])
      dfs(v);
  }
}

int main() {
  in >> n >> m;
  for(int i = 0; i < m; i++) {
    int a, b;
    in >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  for(int i = 0; i < n; i++) {
    if(!seen[i]) {
      cnt = 0;
      sz = 0;
      dfs(i);
      if(cnt == (sz / 2)) {
        ans += cnt % 2;
      }
      else {
        other += cnt % 2;
      }
    }
  }
  ans += other % 2;
  out << ans << '\n';
  return 0;
}