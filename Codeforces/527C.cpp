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

multiset< int, less< int > > hset, wset;
set< int > h, w;

void make(int &x, set< int > &foo, multiset< int, less< int > > &fooset) {
  auto at1 = foo.lower_bound(x);
  auto at2 = foo.lower_bound(x);
  at1--;
  fooset.erase(fooset.find(*at2 - *at1));
  fooset.insert(x - *at1);
  fooset.insert(*at2 - x);
  foo.insert(x);
}

int main() {
  ios_base::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  hset.insert(b);
  wset.insert(a);
  h.insert(0);
  h.insert(b);
  w.insert(0);
  w.insert(a);
  while (c--) {
    char ch;
    int what;
    cin >> ch >> what;
    if (ch == 'H') {
      make(what, h, hset);
    }
    else if (ch == 'V') {
      make(what, w, wset);
    } 
    else assert(false);
    cout << 1LL * (*hset.rbegin()) * 1LL * (*wset.rbegin()) << '\n';
  }
  return 0;
}
