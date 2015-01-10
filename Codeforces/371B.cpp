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

int a, b;
int ans = 0;

int gcd(int a, int b) {
  while(b) {
    a = a % b;
    swap(a, b);
  }
  return a;
}

int solver(int a) {
  int r = 0;
  while(!(a % 2)) {
    r++;
    a /= 2;
  }
  while(!(a % 3)) {
    r++;
    a /= 3;
  }
  while(!(a % 5)) {
    r++;
    a /= 5;
  }
  if(a > 1) return -1;
  else return r;
}

int main() {
  cin >> a >> b;
  int r = gcd(a, b);
  a /= r;  b /= r;
  int x = solver(a);
  int y = solver(b);
  if(x == -1 || y == -1) {
    puts("-1");
  }
  else cout << x + y << endl;
}