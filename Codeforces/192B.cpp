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
#include <memory.h>

using namespace std;

pair< int, int > a[1234];
bool bad[1234];
int n;

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a + 1, a + n + 1);
  for(int i = 1; i <= n; i++) {
    pair< int , int > x = a[i];
    if(x.second == 1 || x.second == n) {
      cout << x.first << "\n";
      return 0;
    }
    else {
      bad[x.second] = 1;
      if(bad[x.second - 1] || bad[x.second + 1]) {
        cout << x.first << "\n";
        return 0;
      }
    }
  }
  return 0;
}
