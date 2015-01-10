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

int a[1010][1010];

bool Checker(int n, int k, int d) {
  long long tmp = 1;
  for(int i = 0 ; i < d; i++) {
    tmp *= k;
    if(tmp >= n) {
      return true;
    }
  }
  return false;
}

int main() {

  int n, k, d;
  cin >> n >> k >> d;
  bool ok = Checker(n, k, d);

  if(!ok) {
    puts("-1");
    return 0;
  }

  for(int j = 1; j <= n; j++) {
    int tmp = j - 1;
    for(int i = 1; i <= d; i++) {
      a[i][j] = (tmp % k) + 1;
      tmp /= k;
    }
  }

  for(int i = 1; i <= d; i++) {
    for(int j = 1; j <= n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

} 