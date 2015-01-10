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

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
}

int hs[3010];

int main() {
  housekeeping();
  int n, m;
  cin >> n >> m;
  for(int i = 0 ; i < m; i++) {
    int foo, bar;
    cin >> foo >> bar;
    hs[foo] = hs[bar] = 1;
  } 
  int x;
  for(int i = 1; i <= n; i++) {
    if(!hs[i]) {
      x = i;
      break;
    }
  }
  
  cout << n - 1 << endl;

  for(int i = 1; i <= n; i++) {
    if(i == x) continue;
    cout << x << " " << i << endl;
  }

}