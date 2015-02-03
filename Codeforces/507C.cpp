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
#include <memory>

using namespace std;

#define d(x) cout << #x << " -> " << x << endl

long long Solver(int h, long long n) {
  if ( h == 0) return 0;

  if ( n > (1LL << (h - 1)) ) {
    return (1LL << h ) + Solver(h - 1, n - (1LL << (h - 1)));
  }
  else {
    return (1) + Solver(h - 1, (1LL << (h - 1)) + 1 - n);
  }
}

int main() {

  ios_base::sync_with_stdio(0);
  long long h, n;
  cin >> h >> n;

  cout << Solver(h, n) << endl;

}