#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
}

bool sortByIndex(pair<long long, int> a, pair<long long, int> b) {
  if(a.second > b.second) return false;
  else return true;
}

// long long a[300010];
pair<long long, int> a[300010];

int main() {
  housekeeping();
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a + 1, a + n + 1);
  long long x = a[1].first;
  for(int i = 1; i <= n; i++) {
    if(a[i].first <= x) {
      // cout << x << " ";
      a[i].first = x;
      x++;
    }
    if(x < a[i].first) {
      // x = a[i];
      // cout << x << " ";
      x = a[i].first;
      x++;
    }
  }

  sort(a + 1, a + n + 1, sortByIndex);

  for(int i = 1; i <= n; i++) cout << a[i].first << " ";

  cout << endl;
}