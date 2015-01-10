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

pair< int, int > a[100010];

bool sort_func(const pair< int, int > &a, const pair< int, int > &b) {
  if(a.second == b.second) {
    return a.first < b.first;
  }
  else return a.second < b.second;
}

int main() {
  long long n, r, avg;
  cin >> n >> r >> avg;
  long long has = 0;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    cin >> foo >> bar;
    a[i].first = foo;
    a[i].second = bar;
    has += foo;
  }
  sort(a, a + n, sort_func);
  long long req = avg * n * 1LL - has;
  long long ans = 0LL;
  for(int i = 0; i < n && req > 0; i++) {
    if(req < r - a[i].first) {
      ans += a[i].second * req;
      break;
    }
    else {
      ans += a[i].second * (r - a[i].first);
      req -= r - a[i].first;
    }
  }

  cout << ans << endl;

}