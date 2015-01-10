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
#include <ctime>

using namespace std;

int n, l, x, y;
int a[100010];

bool check(int t) {
  for(int i = 0; i < n; i++) {
    if(binary_search(a, a + n, a[i] - t)) return true;
  }
  return false;
}

void worker(int v) {
  if(v < 0 || v > l) return;
  if(binary_search(a, a + n, v - y) || binary_search(a, a + n, v + y)) {
    cout << "1\n" << v << "\n";
    exit(0);
  }
}

void distinct() {
  for(int i = 0; i < n; i++) {
    int point = a[i] - x;
    worker(point);
    point = a[i] + x;
    worker(point);
  }
}

int main() {
  cin >> n >> l >> x >> y;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bool A = check(x);
  bool B = check(y);
  if(A && B) {
    cout << 0 << "\n";
    return 0;
  }
  else if(A && !B) {
    cout << 1 << "\n" << y << "\n";
    return 0;
  }
  else if(!A && B) {
    cout << 1 << "\n" << x << "\n";
    return 0;
  }
  distinct();
  cout << 2 << "\n" << x << " " << y << "\n";

}