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

using namespace std;

bool good[123];
int a[123][123];

int main() {
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j) continue;
      if (a[i][j] == 1) {
        good[i] = true;
      }
      else if (a[i][j] == 2) {
        good[j] = true;
      }
      else if (a[i][j] == 3) {
        good[i] = good[j] = true;
      }
    }
  }
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (good[i] == false) cnt++;
  }
  cout << cnt << endl;
  for (int i = 1; i <= n; i++) {
    if (good[i] == false) cout << i << " ";
  }
  cout << endl;
  return 0;
}