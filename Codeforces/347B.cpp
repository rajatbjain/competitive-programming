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

map<int, int> mp;

int main() {
  housekeeping();
  int n, c = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(i == a) {
      c++;
      continue;
    }
    mp[i] = a;
  }

  map<int, int>::const_iterator it;
  it = mp.begin();
  for(; it != mp.end(); it++) {
    int x = it->first;
    int y = it->second;
    int yy = mp[y];
    if(yy == x) {
      cout << c + 2 << endl;
      return 0;
    }
  }
  cout << (c + 1 >= n ? n :   c + 1) << endl;
}