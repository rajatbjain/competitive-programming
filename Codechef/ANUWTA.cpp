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
  int tt;
  cin >> tt;
  while(tt--) {
    long long n;
    cin >> n;
    long long ans = (n) + ((n * (n + 1)) / 2);
    cout << ans << endl;
  }
}