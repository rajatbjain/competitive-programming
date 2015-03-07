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

int n;
int ans;

int digits(int x) {
  vector< bool > has(10, false);
  while(x) {
    has[x % 10] = true;
    x /= 10;
  }
  int cnt = 0;
  for( bool i : has ) i == 1 ? cnt++ : cnt += 0;
  return cnt;
}

void dfs(int x) {
  if(x > 0 && x <= n) ans++;
  for(int add = 0; add <= 9; add++) {
    int y = x * 10 + add;
    if((y > 0 && y <= (int) 1e9 ) && digits(y) <= 2) {
      dfs(y);
    }
  }
}

int main() {
  cin >> n;
  dfs(0);
  out << ans << '\n';
}