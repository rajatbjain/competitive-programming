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

long long a[50010];

int main() {
  housekeeping();
  int n;
  cin >> n;
  long long sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sum /= n;
  long long c = 0;
  for(int i = 0; i < n - 1; i++) {
    if(a[i] == sum) continue;
    c += abs(sum - a[i]);
    if(a[i] < sum) a[i + 1] -= abs(sum - a[i]);
    else if(a[i] > sum) a[i + 1] += abs(sum - a[i]);
    // a[i] = sum;
  }

  cout << c << endl;
}