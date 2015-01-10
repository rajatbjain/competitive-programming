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

int main() {
  housekeeping();
  int n, k;
  cin >> n >> k;
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    if(foo + k <= 5) {
      cnt++;
    }
  }
  cout << cnt / 3 << endl;
}