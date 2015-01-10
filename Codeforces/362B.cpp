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

int a[3010];

int main() {
  // freopen("input.txt", "r", stdin);
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    cin >> a[i];
  } 
  sort(a, a + m);
  if(a[0] == 1 || a[m - 1] == n) {
    puts("NO");
    return 0;
  }
  for(int i = 1; i < m - 1; i++) {
    if(a[i] - a[i - 1] == 1) {
      if(a[i + 1] - a[i] == 1) {
        puts("NO");
        return 0;
      }
    }
  }
  puts("YES");
  return 0;
}