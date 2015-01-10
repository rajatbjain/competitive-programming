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

bool parse(long long num) {
  while(num) {
    int x = num % 10;
    if(x == 8 || x == -8) return true;
    num /= 10;
  }
  return false;
}

int main() {
  long long n;
  cin >> n;
  int c = 1;
  for(long long i = n + 1; ; ) {
    bool ok = parse(i);
    if(ok) {
      cout << c << endl;
      return 0;
    }
    i++, c++;
  }
}
