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

int g[2010];

int main() {
   int n;
   cin >> n;
   for(int i = 1; i <= n; i++) {
      int foo;
      cin >> foo;
      g[i] = foo;
   }

   int Max = 0;

   for(int i = 1; i <= n; i++) {
      int j = i, c = 1;
      while(g[j] != -1) {
        j = g[j];
        c++;
      }
      Max = max(c, Max);
   }

   cout << Max << endl;
}