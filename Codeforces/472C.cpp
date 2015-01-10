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
#include <ctime>
using namespace std;

#define d(b) cout << #b << " " << b << endl;
vector< pair <string, string> > v;
int a[100010];

int main() {
  // freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    string foo, bar;
    cin >> foo >> bar;
    v.push_back(make_pair(foo, bar));
  } 

  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }

  string res = "";
  res = min(v[a[0]].first, v[a[0]].second);
  for(int i = 1; i < n; i++) {
    int x = a[i];
    // d(x);
    if(v[x].first > v[x].second) {
      swap(v[x].first, v[x].second);
    }
    // d(v[x].first);
    // d(v[x].second);
    if(res < v[x].first) {
      res = v[x].first;
      continue;
    }
    // d(res);
    if(res < v[x].second) {
      res = v[x].second;
      continue;
    }
    // d(res);
    cout << "NO\n";
    return 0;
  }
  cout << "YES\n";
  return 0;
}