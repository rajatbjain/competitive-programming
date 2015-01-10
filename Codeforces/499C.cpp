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

pair< long long, long long > a, b;
int cnt;

int main() {
  cin >> a.first >> a.second;
  cin >> b.first >> b.second;
  int n;
  cin >> n;
  while(n--) {
    long long x, y, c;
    cin >> x >> y >> c;
    long long sign_a = a.first * x + a.second * y + c;
    long long sign_b = b.first * x + b.second * y + c;
    if((sign_a > 0 && sign_b < 0) || (sign_a < 0 && sign_b > 0)) {
      cnt++;
    }
  }
  cout << cnt << endl;
}