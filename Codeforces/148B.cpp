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

using namespace std;

int vp, vd, t, f, c;
double at;
int ans;

double compute(double meet) {
  double tt = (double) meet / vd ;
  return tt * vp;
}

int main() {
  cin >> vp >> vd >> t >> f >> c;
  at = 1;
  if(vp >= vd) {
    cout << "0\n";
    return 0;
  }
  at = t * vp;
  while(true) {
    double meet = at * vd / (vd - vp);
    at = meet + (vp * f) + compute(meet);
//    cout << meet << endl;
    if(meet >= c) {
      break;
    }
    else {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}