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

int idx[100010];
long long v = 0, p = 0;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    idx[foo] = i + 1;
  }
  int m;
  cin >> m;
  while(m--) {
    int foo;
    cin >> foo;
    v += (long long)idx[foo];
    p += n - idx[foo] + 1LL;
  }
  cout << v << " " << p << endl;
}