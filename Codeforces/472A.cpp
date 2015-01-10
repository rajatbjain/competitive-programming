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

bool isPrime(long long n) {
  if(n == 0) return false;
  if(n == 1) return false;
  if(n == 2) return true;
  if(!(n & 1)) return false;
  for(int i = 3; i <= sqrt(n); i += 2) {
    if(n % i == 0) return false;
  }
  return true;
}

int main() {
  // freopen("input.txt", "r", stdin);
  long long x;
  cin >> x;
  long long l = 4, r = x;
  r -= 4;
  while(true) {
    if(isPrime(r)) {
      l = l + 2;
      r = r - 2;
      continue;
    }
    cout << l << " " << r << endl;
    return 0;
  }
}