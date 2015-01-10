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
  // freopen("input.txt", "r", stdin);
  int n, m, a, b;
  scanf("%d %d %d %d", &n, &m, &a, &b);
  int cost = 9999999;
  for(int i = 0; i <= n; i++) {
    int cx = i * a;
    int cy = (ceil (double (n - i) / m)) * b;
    if(cx + cy < cost) {
      cost = cx + cy;
    }  
  }
  printf("%d\n", cost);
 }