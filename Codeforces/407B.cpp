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

int a[1234567];
long long b[1234567];
const long long md = (long long) 1e9 + 7;

int bruteForce(int n) {
  for(int i = 1; i <= n; i++) b[i] = 0;
  int pos = 1;
  b[pos] = 1;
  while(pos != n + 1) {
    if(b[pos] % 2 == 1) {
      pos = a[pos];
    }
    else {
      pos++;
    }
    b[pos]++;
  }  
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += b[i];
  }
  return sum;
}

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    scanf("%d", a + i);
  }
  for(int i = n; i >= 1; i--) {
    int y = i;
    int x = a[i];
    int by = b[i] + 1;
    b[i]++;
    for(int at = x; at < y; at++) {
      b[at] = (b[at] + by) % md;
    }  
  }
  long long sum = 0;
  for(int i = 1; i <= n; i++) {
    sum = (sum + b[i] * 2LL) % md;
  }
  cout << sum << endl;
  return 0;  
}