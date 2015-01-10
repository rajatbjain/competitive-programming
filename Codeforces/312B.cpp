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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  double x = (double) a / b;
  double y = (double) (1 - (double) c / d) * (1 - (double) a / b);
  printf("%.10lf", (double)x / (1 - y));
}