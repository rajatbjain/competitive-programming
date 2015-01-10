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

int a[123], b[123];

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 1; i < n; i++) {
    b[i - 1] = a[i] - a[i - 1];
  }

  int best = 999999;
  for(int i = 1; i < n - 1; i++) {
    best = min(best, b[i] + b[i - 1]);
    // cout << b[i] << " " << b[i + 1] << endl;
  }

  int maxx = *max_element(b, b + n - 1);

  cout << max(best, maxx) << endl;
}