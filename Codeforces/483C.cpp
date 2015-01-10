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

int a[100010];

int main() {
  int n, k;
  cin >> n >> k;
  for(int i = 1, j = 1; i <= n; i += 2, j++) {
    a[i] = j;
  }
  for(int i = 2, j = n; i <= n; i += 2, j--) {
    a[i] = j;
  }
  // for(int i = 1; i <= n; i++) {
  //   cout << a[i] << endl;
  // }
  sort(a + k + 1, a + n + 1);
  if(k % 2 == 0) {
    reverse(a + k + 1, a + n + 1);
  }
  for(int i = 1; i <= n; i++) {
    cout << a[i] << " ";
  }

  cout << endl;
}