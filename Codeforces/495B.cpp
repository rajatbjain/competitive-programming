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
  long long x, y;
  cin >> x >> y;
  if(x == y) {
    cout << "infinity\n";
    return 0;
  }
  if(x < y) {
    cout << 0 << endl;
    return 0;
  }
  long long c = x - y;
  int ul = sqrt(c);
  int cnt = 0;
  for(int i = 1; i <= ul; i++) {
    if(c % i == 0) {
      if(x % i == y) cnt++;
      if(c / i == i) continue;
      if(x % (c / i) == y) cnt++;
    }
  }
  cout << cnt << endl;
}