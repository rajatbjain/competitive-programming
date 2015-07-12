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
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
#include <ctime>
#include <climits>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector< int > a(m);
  for(int i = 0; i < m; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int diff = INT_MAX;
  for(int i = 0; i < m - n + 1; i++) {
    int j = i + n - 1;
    if(a[j] - a[i] < diff) {
      diff = a[j] - a[i];
    }
  }
  cout << diff << endl;
  return 0;
}