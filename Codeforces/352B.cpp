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

vector< int > v[100010]; 
pair< int, int > ans[100010];

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    v[foo].push_back(i + 1);
  }

  int j = 0;

  for(int i = 0; i < 100010; i++) {
    if(v[i].empty()) continue;
    if(v[i].size() < 2) {
      ans[j].first = i, ans[j].second = 0;
      j++;
      continue;
    } 
    int d = v[i][1] - v[i][0];
    bool ok = true;
    for(int k = 2; k < (int)v[i].size(); k++) {
      if(v[i][k] - v[i][k - 1] != d) ok = false; 
    }
    if(ok) ans[j].first = i, ans[j].second = d, j++;
  }

  cout << j << endl;
  
  for(int i = 0; i < j; i++) {
    cout << ans[i].first << " " << ans[i].second << endl;
  }
  return 0;
}