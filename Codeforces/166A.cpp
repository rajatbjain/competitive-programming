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
#include <ctime>
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

bool comp(pair<int, int> a, pair<int, int> b) {
  if(a.first == b.first) {
    return b.second < a.second;
  }
  else return a.first < b.first;
}  

int main() {  
  int n, k;
  cin >> n >> k;
  vector<pair <int, int> > v;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    cin >> foo >> bar;
    v.push_back(make_pair(foo, bar));
  }
  sort(v.rbegin(), v.rend(), comp);
  pair<int, int> key = v[k - 1];
  int ans = 0;
  for(int i = 0 ; i < v.size(); i++) {
    if(v[i].first == key.first && v[i].second == key.second) ans++;
  }  
  cout << ans << endl;
}