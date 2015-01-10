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

long long compute(long long i) {
  return 3 * i * (i + 1) / 2 - i;
}

int main() {
  long long n;
  cin >> n;
  long long res = 0;
  for(long long i = 1; compute(i) <= n; i++) {
    if((n + i) % 3 == 0) {
      res++;
    }
  }
  cout << res << endl;
}