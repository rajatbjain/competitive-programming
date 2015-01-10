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

int gcd(int a, int b) {
  if(b == 0) return a;
  else return gcd(b, a % b);
}

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int x = a * d;
  int y = b * c;
  int cx, cy;

  if(x > y) {
    cx = x - y;
    cy = a * d;
  }
  else if(x < y) { 
    cx = y - x; 
    cy = b * c;
  }
  else {
    cout << "0/1" << endl;
    return 0;
  }
  // cout << cx << " " << cy << endl;
  int r = gcd(cx, cy);
  cout << cx / r << "/" << cy / r << endl;
}