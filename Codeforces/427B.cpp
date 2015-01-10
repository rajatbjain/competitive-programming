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
  int n, c; long long t, f = 0;
  cin >> n >> t >> c;
  int count = 0;
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    if(foo > t) {
      count = 0;
    }
    else count++;
    if(count >= c) {
      f++;
    }
  }

  cout << f << endl;
}