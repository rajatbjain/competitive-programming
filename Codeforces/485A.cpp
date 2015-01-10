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

int low(int x) {
  while(x % 2 == 0) x /= 2;
  if(x == 0) {
    cout << "Yes\n";
    exit(0);
  }
  return x;
}

int main() {
  int a, m;
  cin >> a >> m;

  // cout << low(m) << endl;

  if(a % m == 0 or a % low(m) == 0) {
    cout << "Yes\n";
    return 0;
  }
  cout << "No\n";
  return 0;

}