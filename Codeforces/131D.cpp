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
};
Scanner in = Scanner();
Printer out = Printer();


vector< int > g[3010];
vector< int > seen, incycle, dist;
int cycleAt = -1;

int go(int vertex, int anc) {
if (seen[vertex])
      return vertex;
  seen[vertex] = true;
  for (int i : g[vertex]) {
    if (i != anc) {
      int result = go(i, vertex);
      if (result >= 0) {
        incycle[vertex] = true;
        if (result == vertex)
          return -2;
        else
          return result;
      } else if (result == -2)
        return -2;
    }
  }
  return -1;
}


int main() {
  int n;
  in >> n;
  seen.resize(n);
  dist.resize(n);
  incycle.resize(n);
  for(int i = 0; i < n; i++) {
    int x, y;
    in >> x >> y;
    x--, y--;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  assert(go(0, -1) == -2);
  queue< int > q;
  for(int i = 0; i < n; i++) if(incycle[i] == 1) q.push(i);
  while(!q.empty()) {
    int u = q.front();
    q.pop();
    for(int v: g[u]) {
      if(!incycle[v]) {
        incycle[v] = true;
        q.push(v);
        dist[v] = dist[u] + 1;
      }
    }
  }
  for(int x : dist) {
    out << x << " " ;
  }
  out << '\n';
}