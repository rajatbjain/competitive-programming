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

int main() {
  long long l, r;
  scanf("%I64d %I64d", &l, &r);
  for(long long i = l; i <= r; i++) {
    for(long long j = i + 1; j <= r; j++) {
      for(long long k = j + 1; k <= r; k++) {
        if(__gcd(i, j) == 1 && __gcd(j, k) == 1 && __gcd(i, k) > 1) {
          cout << i << " " << j << " " << k << endl;
          return 0;
        }
      }
    }
  }
  cout << -1 << endl;
}