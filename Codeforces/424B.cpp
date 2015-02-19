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

const int million = (int)1e6;
pair< pair< int, int >, int > a[12345];

bool comp(const pair< pair< int, int >, int > &a, const pair< pair< int, int > , int > &b) {
 return (a.first.first * a.first.first + a.first.second * a.first.second) < (b.first.first * b.first.first + b.first.second * b.first.second);
}

int main() {
  int n, s;
  cin >> n >> s;
  for(int i = 0; i < n; i++) {
    int x, y, pop;
    cin >> x >> y >> pop;
    a[i] = make_pair( make_pair(x, y), pop);
  }      
  sort(a, a + n, comp);
  for(int i = 0; i < n; i++) {
    if(s < million) {
      s += a[i].second; 
    } 
    else if(s >= million) {
      printf("%.10f\n", sqrt((a[i - 1].first.first * a[i - 1].first.first) + (a[i - 1].first.second * a[i - 1].first.second)));      
      return 0;
    }
    else assert(true);
  }
  if(s >= million) {
    printf("%.10f\n", sqrt((a[n - 1].first.first * a[n - 1].first.first) + (a[n - 1].first.second * a[n - 1].first.second)));      
    return 0;
  }
  puts("-1");
  return 0;
}