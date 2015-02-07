/*
  I always did something I was little not ready to do.
  I think that's how you grow. When there's that moment 
  of 'Wow, I am not really sure I can do this...' and
  push through those moments, that's when you have a
  BREAKTHROUGH.
*/

#include <cstdio>
#include <bitset>
#include <cassert>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>
#include <list>
#pragma comment(linker, "/STACK:256000000")

using namespace std;

long long gcd(long long a, long long b) {
  while(a && b) a >= b ? a %= b : b %= a;
  return a + b;
}

int main() {
  ios_base::sync_with_stdio(0);
  long long n, a, b;
  cin >> n >> a >> b;
  long long div = gcd(a, b);
  a /= div;
  b /= div;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    x = x * a;
    x -= (x / b) * b;
    cout << x / a << endl;
  }

}