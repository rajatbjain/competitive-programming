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

int x, y;

int main() {
  // freopen("input.txt", "r", stdin);
  for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= 5; j++) {
      int foo;
      scanf("%d", &foo);
      if(foo == 1) {
        x = i, y = j;
      }
    }
  }

  printf("%d\n", abs(3 - x) + abs(3 - y));

}