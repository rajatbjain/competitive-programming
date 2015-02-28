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

int n, k;
double tt;
int a, b;

int main() {
  cin >> n >> k >> tt;
  n *= k;
  int t = tt * 100;
  for(int i = 1; i <= n; i++) {
    a = ((double) i / n) * 10000;
    b = ((double) (i + 1) / n) * 10000;
    if(a <= t && t < b) {
      n = n / k;
      for(int j = 1; j <= n; j++) {
        int pr = 0;
        if(i > 0 && i < k) pr = i;
        if(i > 0 && i >= k) pr = k;
        i -= k;
        cout << pr << " ";
      }
      cout << '\n';
      return 0;
    }
  }
  n /= k;
  for(int i = 0; i < n; i++) cout << 0 << ' ';
  cout << '\n';
  return 0;
}