#include <cstdio>
#include <bitset>
#include <cassert>
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
#include <list>

using namespace std;

int main(int argc, char* argv[]) {
  double a, d;
  cin >> a >> d;
  int n;
  cin >> n;

  double dist = 0;
  long long skip = 0;

  for(int i = 1; i <= n; i++) {
    dist += d;
    int x = dist / a;
    skip += x;
    dist -= x * a;
    if(skip % 4 == 0) {
      printf("%.12f %.12f\n", dist, 0.00);
    }
    else if(skip % 4 == 1) {
      printf("%.12f %.12f\n", a, dist);
    }
    else if(skip % 4 == 2) {
      printf("%.12f %.12f\n", a - dist, a);
    }
    else if(skip % 4 == 3) {
      printf("%.12f %.12f\n", 0.00, a - dist);
    }
  }
}