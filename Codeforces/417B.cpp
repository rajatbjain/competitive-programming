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

vector< int > order(100010, -1);

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    int foo, bar;
    scanf("%d %d", &foo, &bar);
    if (order[bar] < foo - 1) {
      puts("NO");
      return 0;
    }
    else order[bar] = max( order[bar], foo );
  }
  puts("YES");
}