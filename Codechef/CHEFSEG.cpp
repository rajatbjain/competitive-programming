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

void get(int x, long long k) {
  vector < bool > f;
  while(k > 1) {
    f.push_back(k % 2);
    k /= 2;
  }
  double ans = (double)x / 2;
  double mid = (double)ans / 2;
  for(int i = f.size() - 1; i >= 0; i--) {
    if(f[i] == 1) {
      ans += mid;
    }
    else {
      ans -= mid;
    }
    mid /= 2;
  }
  printf("%.9f\n", ans);
}

int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int x; long long k;
    cin >> x >> k;
    get(x, k);
  } 
}