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

#define d(b) cout << #b << " " << b << endl;

int main() {
  // freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  int a[n];
  int small = 999999, pos = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  } 
  
  for(int i = n - 1; i > 0; i--) {
    if(a[i - 1] > a[i]) {
      pos = i;
      break;
    } 
  }
  for(int sz = 0, i = (pos + 1) % n; i != pos && sz < n; i = (i + 1) % n, sz++) {
    int x = i;
    int y = i - 1 < 0 ? i - 1 + n : i - 1;
    if(a[x] < a[y]) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << (n - pos == n ? 0 : n - pos) << endl;
}