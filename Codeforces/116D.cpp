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

int n, m;
char g[200][200];
int till = 0;

#define d(b) cout << #b << " " << b << endl;

int main() {
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
        cin >> g[i][j];
        if(g[i][j] == 'W') till = i;
    }
  }
  
  if(till == 0) {
    cout << 0 << "\n";
    return 0;
  }

  int give = 1, ans = -1;
  for(int i = 1; i <= till; i++) {
    if(i % 2) { // odd iteration
      int last = give;
      for(int j = 1 ; j <= m; j++) {
        if((g[i][j] == 'W') || (g[i + 1][j] == 'W')) {
          if(j > last) last = j;
        }
      }
      ans += last - give + 1;
      give = last;
    }
    else { // even iteration
      int last = give;
      for(int j = m; j >= 1; j--) {
        if(g[i][j] == 'W' || g[i + 1][j] == 'W') {
          if(j < last) last = j;
        }
      }
      ans += give - last + 1;
      give = last;
    }
  }
  cout << ans << endl;
}