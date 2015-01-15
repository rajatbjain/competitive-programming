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

struct input { 
  inline input& operator>> (int& x){scanf("%d", &x); return *this;}
  inline input& operator>> (long long& x){scanf("%I64d", &x); return *this;}
  inline input& operator>> (char& x){scanf(" %c", &x); return *this;}
}in;

bool comp(const pair< int, int > &a, const pair< int, int > &b) {
  if(a.first == b.first) {
    return a.second > b.second;
  } else {
    return a.first < b.first;
  }
}

inline pair<int, int > get(const pair< int, int > &a, const pair < int, int > &b) {
  return( make_pair( max(a.first, b.first), min(a.second, b.second) ) );
}

void solve() {
  int n;
  in >> n;
  vector< pair <int , int > > a;
  int ans = 1;

  for(int i = 0; i < n; i++) {
    int foo, bar;
    in >> foo >> bar;
    a.push_back(make_pair(foo, bar));
  }

  sort(a.begin(), a.end(), comp);

  if(a.size() == 1) {
    printf("%d\n", ans);
    return;
  }

  vector< pair < int, int > > range(n);
  range[0] = a[0];

  for(int i = 1; i < (int) a.size(); i++) {
    if(range[i - 1].second >= a[i].first) {
      range[i] = get(range[i - 1], a[i]);
    }
    else {
      range[i] = a[i];
      ans++;
    }
  }


  printf("%d\n", ans);
}

int main() {
  int tt;
  scanf("%d", &tt);
  while(tt--) solve();
}