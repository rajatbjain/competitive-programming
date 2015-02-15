#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>

using namespace std;

map< pair< int, int >, int > keep;

int gcd(int a, int b) {
  while(a && b) {
    if(a >= b) a %= b;
    else b %= a;
  }
  return a + b;
}

int main() {
  int points, x, y;
  cin >> points >> x >> y;
  for(int i = 0; i < points; i++) {
    int foo, bar;
    cin >> foo >> bar; 
    int y1 = bar - y;
    int x1 = foo - x;
    if((y1 > 0 && x1 > 0) || (x1 < 0 && y1 < 0)) {
      y1 = abs(y1);
      x1 = abs(x1);
      int d = gcd(y1, x1);
      keep[make_pair(y1/d,x1/d)] = 1;
    }
    else {
      y1 = abs(y1);
      x1 = abs(x1);
      int d = gcd(abs(y1), abs(x1));
      keep[make_pair(-y1/d,x1/d)] = 1;
    }
  }
  cout << keep.size() << endl;
}