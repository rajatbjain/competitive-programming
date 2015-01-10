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

const long long int md = 1000000007;

int main() {
  int n;
  cin >> n;
  
  if(n == 1) {
    cout << 0 << endl;
    return 0;
  }

  long long ans = 3;
  
  for(int i = 3; i <= n; i++) {
    int cmp = i % 2 ? -3 : 3;
    ans = ((3 % md * ans % md) % md + cmp % md) % md;
  }

  cout << ans % md << endl;
}