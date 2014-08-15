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
#define d(c) cout << #c << " " << c << endl;
using namespace std;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0}; 
int n;

inline bool range(int x, int y) {
  if((x >= 0 && x < n) && (y >= 0 && y < n))
    return true;
  else return false;
}

inline bool border(int x, int y) {
  if(x == 0 || x == n-1) return true;
  if(y == 0 || y == n-1) return true;

  return false;
}


int main() {
  // freopen("input.txt", "r", stdin);
  cin >> n;
  char a[n][n];
  char b[n][n];
  for(int i = 0; i < n ; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(border(i, j)) {
        b[i][j] = a[i][j];
        continue;
      }
      int cur = a[i][j] - '0'; 
      bool nope = false;
      for(int ii = 0; ii < 4; ii++) {

        if(!range(i+dx[ii], j+dy[ii])) continue;
        
        int val = a[i+dx[ii]][j+dy[ii]] - '0';
        if(cur <= val) {
          nope = true;
          break;
        }
      }

      if(nope == false) {
        b[i][j] = 'X';
      }
      else b[i][j] = a[i][j];
    }
  }

  for(int i = 0; i < n ; i++) {
    for(int j = 0; j < n; j++) {
      cout << b[i][j] ;
    }
    cout << endl;
  }

}