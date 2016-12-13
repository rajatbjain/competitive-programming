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

struct tuple {
  int x, y, z;

  tuple() {}
  
  void make_tuple(int a, int b, int c) {
    this->x = a;
    this->y = b;
    this->z = c;
  }

  bool empty() {
    if(this->x == 0 && this->y == 0 && this->z == 0) return true;
    else return false;
  }

  bool negative() {
    if(this->x < 0 || this->y < 0 || this->z < 0) return true;
    else return false;
  }

};

int n; 
tuple sum;
tuple a[123];
bool found = false;

inline tuple sub(tuple u, tuple v) {
  u.x -= v.x;
  u.y -= v.y;
  u.z -= v.z;
  return u;
}

void init() {
  found = false;
  memset(a, 0, sizeof a);
}

void solver(int idx, tuple reach) {
  if(reach.negative()) return;
  if(reach.empty() || found) {
    found = true;
    return;
  }
  if(idx >= 0) {
    solver(idx - 1, sub(reach, a[idx]));
    solver(idx - 1, reach);
  }
}

int main() {
  int tt, Caseid = 0;
  cin >> tt;
  while(tt--) {
    
    init();

    int foo, bar, baz;
    cin >> foo >> bar >> baz;
    
    sum.make_tuple(foo, bar, baz);
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
      cin >> foo >> bar >> baz;
      a[i].make_tuple(foo, bar, baz);
    }

    solver(n - 1, sum);

    printf("Case #%d: ", ++Caseid);

    puts(found ? "yes" : "no");

  }
}