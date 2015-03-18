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
  
  long long a, b;
  cin >> a >> b;
  long long ans = 0;
  while (a != b && a && b) {
    if (a < b) swap(a, b);
    long long rem = a / b;
    a -= rem * b;
    ans += rem;
  }
  cout << ans << endl;
  return 0;
}
