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

int k, b, n, t;

int main() {
  cin >> k >> b >> n >> t;
  long long z = 1;
  for(int i = 0; i < n; i++) {
    z = z * k + b;
  }
  int seconds = 0;
  long long value = t;
  while(value < z){
    value = value * k + b;
    seconds++;
  }

  cout << seconds << endl;
}
