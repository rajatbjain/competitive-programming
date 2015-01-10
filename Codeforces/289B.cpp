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

int main() {
  int n, m, d;
  cin >> n >> m >> d;
  vector< int > f;

  for(int i = 0; i < n * m; i++) {
    int x;
    cin >> x;
    f.push_back(x);
  }
  sort(f.begin(), f.end());
  int a = f.size() / 2;
  long long ans = 0;
  for(int i = 0; i < (int) f.size(); i++) {
    if((f[i] - f[a]) % d != 0) {
      cout << -1 << endl;
      return 0;
    }
    ans += abs(f[i] - f[a]) / d;
  }
  cout << ans << endl;
}  
