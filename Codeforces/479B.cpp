#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <bitset>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

pair< int, int > a[123];
int n, k;
vector< pair< int, int > > v;

int main() {
  cin >> n >> k;
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    a[i].first = foo;
    a[i].second = i + 1;
  }
  int j = 0, i = n - 1;
  int s = 9999999;
  while(k--) {  
    sort(a, a + n);
    if(a[i].first <= a[j].first) break;
    a[i].first--, a[j].first++;
    v.push_back(make_pair(a[i].second, a[j].second));
  }
  sort(a, a + n);
  
  s = a[n - 1].first - a[0].first;
  cout << s << " " << v.size() << endl;
  for(int i = 0; i < (int)v.size(); i++) {
    cout << v[i].first << " " << v[i].second << endl;
  }
}