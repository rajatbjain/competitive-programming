#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>	
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  int t; 
  scanf("%d", &t);
  while(t--) {
    long long x, y; bool ok = false;
    cin >> x >> y;
    if(x == 0 && y == 0) {
      ok = true;
    }
    
    if(x == 0 && (abs(y)&1) == 0) ok = true;
    
    if(y == 0) {
      if(x > 0 && (x&1) == 1) ok = true;
      else if(x < 0 && (abs(x)&1) == 0) ok = true;
    }

    if(x > 0) {
      if((x&1) == 1) {
        if(y >= 0) {
          if(y <= x+1) ok =true;
          else if((y&1) == 0) ok = true;
        }
        else if (y < 0) {
          int yy = abs(y);
          if(yy < x) ok = true;
          else if ((yy&1) == 0) ok = true;
        }
      }
      else {
        if(y < 0) {
          int yy = abs(y);
          if(yy >= x && (yy&1) == 0) ok = true;
        }
        else if (y > 0) {
          if(y > x && (y&1) == 0) ok = true;
        }
      }
    }

    else if(x < 0) {
      int xx = abs(x);
      int yy = abs(y);
      if((xx&1) == 1) {
        if(yy > xx && (yy&1) == 0) ok = true;
      }
      else {
        if(yy <= xx) ok = true;
        else if (yy > xx && (yy&1) == 0) ok = true;
      }
    }

    if(ok) cout << "YES\n";
    else cout << "NO\n";

  }
}