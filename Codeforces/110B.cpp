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
  int n;
  scanf("%d", &n);
  int i = 1;
  while(n--) {
    if((i - 1) % 4 == 0) putchar('a');
    else if((i - 1) % 4 == 1) putchar('b');
    else if((i - 1) % 4 == 2) putchar('c');
    else if((i - 1) % 4 == 3) putchar('d');
    i++;
  }

  printf("\n");
}