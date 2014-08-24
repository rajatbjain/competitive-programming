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
#include <ctime>
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

#define INPUT(file) freopen(file, "r", stdin)
#define OUTPUT(file) freopen(file, "w", stdout)

int main() {
  INPUT("milk.in");
  OUTPUT("milk.out");
  long long n; int m;
  cin >> n >> m;
  vector< pair<int, long long> > foo;
  for(int i = 0; i < m; i++) {
    int cc, milk;
    cin >> cc >> milk;
    foo.push_back(make_pair(cc, milk));
  }

  sort(foo.begin(), foo.end());

  long long amt = 0;

  for(int i = 0; i < foo.size() && n; i++) {
    if(foo[i].second <= n) {
      amt += foo[i].second * foo[i].first;
      n -= foo[i].second;
    }
    else {
      amt += n * foo[i].first;
      n = 0;
    }
  }

  cout << amt << endl;

  return 0;
}