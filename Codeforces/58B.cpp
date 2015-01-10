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
  int n;
  cin >> n;
  while(n > 1) {
    cout << n << " ";
    for(int i = 2; i <= n; i++) {
      if(n % i == 0) {
        n /= i;
        break;
      }
    }
  }
  cout << 1 << endl;
}
