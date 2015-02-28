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
#define long long long

using namespace std;

int n, k;
int a[1234];
int b[1234];
vector< pair < int, int > > ans(12345);

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int at = 1; at <= n; at++) {
    b[at] = a[at];
    for(int i = at - 1; i >= 1; i--) {
      b[i] = b[i + 1] - k;
    }
    for(int i = at + 1; i <= n; i++) {
      b[i] = b[i - 1] + k;
    }
    vector< pair< int, int > > tmp;
    for(int i = 1; i <= n; i++) {
      if(b[i] <= 0) {
        tmp.clear();
        tmp.resize(12345);
        break;
      }
      if(a[i] == b[i]) continue;
      else {
        tmp.push_back(make_pair(i, b[i] - a[i]));
      }
    }
    if(tmp.size() == 12345)  {
      continue;
    }
    if(tmp.size() < ans.size()) {
      ans.clear();
      ans = tmp;
    }
  }
  int sz = ans.size();
  cout << sz << "\n";
  for(int i = 0; i < sz; i++) {
    if(ans[i].second < 0) {
      cout << "-" << " " << ans[i].first << " " << -ans[i].second << '\n';
    }
    else {
      cout << "+" << " " << ans[i].first << " " << ans[i].second << '\n';
    }
  }
  return 0;
}