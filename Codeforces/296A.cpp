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

int n;
int a[1010];

int main() {
  cin >> n;
  for(auto i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    a[foo]++;
  }

  for(auto &i : a) {
    if(i > ceil((double)n / 2)) {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;
}