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
#include <numeric>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>
#define long long long

using namespace std;

long n, m;
long x, y;
long k;
long dif, movex, movey;
long ans;
const long MAX = (long) 1e12;

void solve(long xx, long yy) {
  bool subx = false, suby = false;
  dif = movex = movey = 0;
  if(xx < 0) {
    subx = true;
    xx = -xx;
  }
  if(yy < 0) {
    suby = true;
    yy = -yy;
  }
  if(xx == 0) {
    movex = MAX;
  }
  else {
    if(subx) movex = (x - 1) / xx;
    else movex = (n - x) / xx;
  }
  if(yy == 0) {
    movey = MAX;
  }
  else {
    if(suby) movey = (y - 1) / yy;
    else movey = (m - y) / yy;
  }
  if(movex == MAX && movey == MAX) return;
  dif = min(movex, movey);
  ans += dif;
  if(xx and subx) x -= dif * xx;
  else if(xx) x += dif * xx;
  if(yy && suby) y -= dif * yy;
  else if(yy) y += dif * yy;
}

int main() {
  cin >> n >> m >> x >> y >> k;
  while(k--) {
    long xx, yy;
    cin >> xx >> yy;
    solve(xx, yy);
  }   
  cout << ans << endl;
  return 0;
}