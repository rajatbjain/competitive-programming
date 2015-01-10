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
  // freopen("output.txt", "w", stdout);
}

long long a[100010], b[100010];

int main() {
  housekeeping();
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b, b + n + 1);

  for(int i = 2; i <= n; i++) {
    a[i] += a[i - 1];
    b[i] += b[i - 1];
  }

  int m;
  cin >> m;
  while(m--) {
    int type;
    cin >> type;
    if(type == 1) {
      int l, r;
      cin >> l >> r;
      cout << a[r] - a[l - 1] << endl;
    }
    else if(type == 2) {
      int l, r;
      cin >> l >> r;
      cout << b[r] - b[l - 1] << endl;
    }
  }
}