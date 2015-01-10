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

int n, m, k;

void next(int &x, int &y) {
  if(x & 1) {
    y++;
    if(y > m) {
      x++;
      y = m;
    }
  }
  else {
    --y;
    if(y < 1) {
      ++x;
      y = 1;
    }
  }
} 

int main() {
  cin >> n >> m >> k;
  
  int x = 1, y = 1;
  int cnt = 0;

  for(int i = 1; i < k; i++) {
    cout << 2 << " ";
    for(int j = 1; j <= 2; j++) {
      cout << x << " " << y << " ";
      next(x, y);
    }
    cnt += 2;
    cout << endl;
  }

  int left = (n * m) - cnt;
  cout << left << " ";
  for(int i = 1; i <= left; i++) {
    cout << x << " " << y << " ";
    next(x, y);
  }
  cout << endl;
}