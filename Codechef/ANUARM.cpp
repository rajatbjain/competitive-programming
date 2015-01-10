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
  int tt;
  cin >> tt;
  while(tt--) {
    int n, m;
    cin >> n >> m;
    int Max = -1, Min = 99999999;
    for(int i = 0; i < m; i++) {
      int foo;
      cin >> foo;
      Max = max(foo, Max);
      Min = min(foo, Min);
    }
    
    for(int i = 0; i < n; i++) {
      cout << max(abs(Max -  i), abs(Min - i)) << " ";
    }
    cout << endl;
  } 
}