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

int a[110];
const double pi = acos(-1); 

int main() {
  // freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  reverse(a, a + n);
  int x = 0;
  for(int i = 0; i < n - 1; i += 2) {
    x += a[i] * a[i] - a[i + 1] * a[i + 1];
  }
  if(n & 1) x += a[n - 1] * a[n - 1];
  printf("%.10f\n", pi * x);
}