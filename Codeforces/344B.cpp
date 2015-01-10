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

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
}

int gcd(int a, int b) {
  if(b == 0) return a;
  else gcd(b, a % b);
}

int main() {
  housekeeping();
  int a, b, c;
  cin >> a >> b >> c;
  int ul = min(a, b);
  for(int i = 0; i <= ul; i++) {
    int aa = a - i;
    int bb = b - i;
    if(aa + bb == c) {
      cout << i << " " << bb << " " << aa << endl;
      return 0;
    }
  }
  puts("Impossible");
}