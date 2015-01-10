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

inline bool check(int ax, int bx, int az, int bz) {
  if(bx <= bz && bx >= az) return true;
  else if(ax >= az && ax <= bz) return true;
  else if(ax <= az && bx >= bz) return true;
  else return false;
}

int main() {
  // freopen("input.txt", "r", stdin);
  int p, q, l, r;
  cin >> p >> q >> l >> r;
  vector< pair<int , int> > x, z;
  for(int i = 0; i < p; i++) {
    int foo, bar;
    cin >> foo >> bar;
    z.push_back(make_pair(foo, bar));
  }  
  for(int i = 0; i < q; i++) {
    int foo, bar;
    cin >> foo >> bar;
    x.push_back(make_pair(foo, bar));
  }

  int t = 0;
  while(l <= r) {
    int xlen = x.size();
    int zlen = z.size();
    for(int i = 0; i < xlen; i++) {
      int ax = x[i].first + l, bx = x[i].second + l;
      bool found = false;
      for(int j = 0; j < zlen; j++) {
        int az = z[j].first, bz = z[j].second;
        if(check(ax, bx, az, bz)) {
          t++;  
          found = true;
          break;
        }
      }
      if(found) break;
    } 
    l++;
  }

  cout << t << endl;
}