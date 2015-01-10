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

int day[3010];

int main() {
   int n, m;
   scanf("%d %d", &n, &m);
   for(int i = 0; i < n; i++) {
      int d, f;
      scanf("%d %d", &d, &f);
      day[d] += f;
   }

   int ans = 0;

   for(int i = 1; i <= 3001; i++) {
      int k = m;
      int x = min(k, day[i - 1]);
      k -= x;
      int y = min(k, day[i]);
      k -= y;
      day[i] -= y;
      ans += x + y;
   }
   cout << ans << endl;
}