#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int s = 0;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    scanf("%d %d", &foo, &bar);

    if(s + foo <= 500) {
      s += foo;
      putchar('A');
    }
    else {
      s -= bar;
      putchar('G');
    }
  }
}