#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a = n >> 1;
  int b = n % 2;
  bool ok = false;
  while(a >= 0) {
    if(!((a + b) % m)) {
      ok = true;
      break;
    }
    else {
      a -= 1;
      b += 2;
    }
  }
  if(ok) cout << a + b << endl;
  else cout << -1 << endl;
}