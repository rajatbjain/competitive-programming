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

int a[1234];

int main() {
  int n, m, k, p;
  scanf("%d %d %d", &n, &m, &k);
  for(int i = 0; i < m; i++) {
    scanf("%d", a + i);
  }
  scanf("%d", &p);

  int friends = 0; 
  for(int i = 0; i < m; i++) {
    if(__builtin_popcount(p ^ a[i]) <= k) friends++;
  }

  printf("%d\n", friends);

}