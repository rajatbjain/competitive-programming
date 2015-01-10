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

int a[3010], b[3010];

int main() {
  // freopen("input.txt", "r", stdin);
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(a, a + n); sort(b, b + m);
  int i, j;
  for(i = 0, j = 0; i < n && j < m; ) {
    if(a[i] <= b[j]) {
      i++, j++;
    }
    else{
      j++;
    }
  }

  cout << n - i << endl;

}