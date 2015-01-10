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

const long long md = 1000000007;

int main() {
  long long a, b;
  cin >> a >> b;
  long long x = ((a * (a + 1)) / 2) % md;
  long long y = ((b * (b - 1)) / 2) % md;

  long long sum = x * b % md;
  sum = sum + a;
  sum %= md;
  sum *= y;
  sum %= md;

  cout << sum << endl;
}