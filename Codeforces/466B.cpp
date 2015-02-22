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

int main() {
  long long n, a, b;
  cin >> n >> a >> b;
  if(a * 1LL * b >= 6 * 1LL * n) {
    cout << a * b << "\n" << a << " " << b << endl;
  }   
  else {
    bool flag = false;
    if(a > b) {
      swap(a, b);
      flag = true;
    }
    n = n * 6;
    do {
      int sq = ceil(sqrt(n));
      for(int i = a; i <= sq; i++) {
        if(n % i == 0 && (n / i) >= b && n % (n / i) == 0) {
          cout << n << endl;
          if(flag) {
            cout << n / i << " " << i << endl;
          }
          else {
            cout << i << " " << n / i << endl;
          }
          return 0;
        } 
      }
    } while(n++);
  }
  return 0;
}