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
  int x1, x2, y1, y2;
  int x3, x4, y3, y4; 
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  if(x1 == x2) {
    printf("%d %d %d %d \n", x1 + (y2 - y1), y1, x2 + (y2 - y1), y2);
    return 0;
  }
  else if(y1 == y2) {
    printf("%d %d %d %d\n", x1, y1 + (x2 - x1), x2, y2 + (x2 - x1));
    return 0;
  }
  else {
    if(abs(x1 - x2) != abs(y1 - y2)) {
      printf("-1\n");
      return 0;
    }
    printf("%d %d %d %d\n", x1, y2, x2, y1);
    return 0;
  }
}