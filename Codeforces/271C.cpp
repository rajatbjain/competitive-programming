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

int main() {
  ios_base::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  if ((n / k) < 3) {
    cout << -1 << endl;
    return 0;
  }
  int gap = 2;
  int out = 1;
  for (int i = 1; i <= n; i += gap) {
    if (out == k + 1) {
      out = 1;
      if (gap == 1) gap = 2;
      else gap = 1;
    }
    for (int j = 0; j < gap && (j + i) <= n; j++) cout << out << " ";
    out++;
  }
  return 0;
}
