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

vector< pair< int, int > > v;

long long get(pair< int, int > a) {
  return a.first * 1111111LL + a.second;
}

bool comparator(pair< int, int > a, pair< int, int > b) {
  return (get(a) < get(b));
}

int main() {
  ios_base::sync_with_stdio(false);
  for (int i = 0; i < 8; i++) {
    int x, y;
    cin >> x >> y;
    v.push_back(make_pair(x, y));
  }
  sort(v.begin(), v.end());
  // 2 4 7
  // 1   6
  // 0 3 5
  bool ok = true;
  ok &= (v[0].first == v[1].first && v[1].first == v[2].first);
  ok &= (v[3].first == v[4].first);
  ok &= (v[5].first == v[6].first && v[6].first == v[7].first);
  
  ok &= (v[0].second == v[3].second && v[3].second == v[5].second);
  ok &= (v[1].second == v[6].second);
  ok &= (v[2].second == v[4].second && v[4].second == v[7].second);
  
  ok &= (v[0].second != v[1].second && v[1].second != v[2].second);
  ok &= (v[3].second != v[4].second);
  ok &= (v[5].second != v[6].second && v[6].second != v[7].second);
  
  ok &= (v[0].first != v[3].first && v[3].first != v[5].first);
  ok &= (v[1].first != v[6].first);
  ok &= (v[2].first != v[4].first && v[4].first != v[7].first);

  puts(ok ? "respectable" : "ugly");
  return 0;
}
