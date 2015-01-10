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

long long n, k;

bool check(long long v) {
  long long res = 0;
  long long d = k;
  res += v;
  
  while(v / d > 0) {
    res += v / d;
    d = d * k;
  }

  if(res >= n) return true;
  else return false;
}

long long binary() {
  long long l = 1, r = n;
  while(l < r) {
    long long m = (l + r) >> 1;
    if(check(m)) r = m;
    else l = m + 1;
  }
  return r;
}

int main() {
  cin >> n >> k;
  cout << binary() << endl;
}