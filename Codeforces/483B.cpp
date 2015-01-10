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

#ifdef AWESOMENESS
  #define d(b) cout << #b << " " << b << endl;
#else 
  #define d(b) 
#endif

long long a, b, x, y;

bool check(long long m) {
  long long cx = m - m / x;
  long long cy = m - m / y;
  long long cz = m - m / x - m / y + m / (x * y);
  long long ax = a, bx = b;
  ax -= cx - cz;
  bx -= cy - cz;
  if(ax <= 0 && bx <= 0) return true;
  if(ax >= 0 && bx >= 0 && ax + bx <= cz) return true;
  if(ax < 0 && bx <= cz) return true;
  if(ax <= cz && bx < 0) return true;

  return false;
}

int main() {
  scanf("%I64d %I64d %I64d %I64d", &a, &b, &x, &y);
  long long l = 1, r = 1000000000000;
  while(l < r) {
    long long m = (l + r) / 2;
    // d(l); d(r);
    // d(check(m));
    if(check(m)) r = m ;
    else l = m + 1;
  }
  cout << l << endl;
}