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

int h[100];

int main() {
  int n, p, q;
  scanf("%d", &n);
  scanf("%d", &p);
  for(int i = 0; i < p; i++) {
    int foo;
    cin >> foo;
    h[foo] = 1;
  }
  scanf("%d", &q);
  for(int i = 0; i < q; i++) {
    int foo;
    cin >> foo;
    h[foo] = 1;
  }

  for(int i = 1; i <= n; i++) {
    if(h[i] == 0) {
      puts("Oh, my keyboard!");
      return 0;
    }
  }
  puts("I become the guy.");
}