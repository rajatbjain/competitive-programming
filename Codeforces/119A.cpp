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

int gcd(int a, int b) {
  if(b == 0) return a;
  else return gcd(b, a % b);
}

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  char last;
  while(n) {
    int ga = gcd(n , a);
    if(n >= ga) {
      n -= ga;
      last = 'S';
    }
    else n = 0;
    int gb = gcd(n, b);
    if(n >= gb) {
      n -= gb;
      last = 'A';
    }
    else n = 0;
  }
  if(last == 'S') puts("0");
  else puts("1");
}
