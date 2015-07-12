#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
#include <ctime>
#include <climits>

using namespace std;


void solve() {
  vector< vector< char > > a;
  vector< pair< int, int > > ans;
  string s;
  cin >> s;
  for(int rows = 1; rows <= 12; rows++) {
    if(12 % rows) continue; 
    int cols = 12 / rows;
    a.resize(rows);
    for(int i = 0; i < (int) a.size(); i++) {
      a[i].resize(cols);
    }
    int cur = 0;
    for(int i = 0; i < rows; i++) {
      for(int j = 0; j < cols; j++) {
        a[i][j] = s[cur++];
      }
    }
    for(int j = 0; j < cols; j++) {
      bool ok = true;
      for(int i = 0; i < rows; i++) {
        if(a[i][j] != 'X') {
          ok = false;
        }
      }
      if(ok) {
        ans.push_back(make_pair(rows, cols));
        break;
      }
    }
  }
  cout << ans.size() << " ";
  for(auto x: ans) {
    cout << x.first << "x" << x.second << " " ;
  }
  cout << endl;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin >> tt;
  while(tt--) {
    solve();
  }

  return 0;
}