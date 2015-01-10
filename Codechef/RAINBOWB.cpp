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

const long long int md = 1000000007;

vector<long long>a (500100, 0), b(500100, 0), c(500100, 0), d(500100, 0);


int main() {
  a[0] = b[0] = c[0] = d[0] = 1;
  long long n;
  cin >> n;
  long long xx = ceil((double)n / 2);
  xx -= 7;
  if(xx == 0) {
   cout << "1\n";
   return 0;
  }

  for(int i = 1; i <= xx; i++) {
    long long x = ((((i + 1) % md) * ((i + 2) % md)) >> 1) % md;
    a[i] = (x % md + a[i - 1] % md) % md;
    b[i] = (b[i - 1] % md + a[i] % md) % md;
    c[i] = (c[i - 1] % md + b[i] % md) % md;
    d[i] = (d[i - 1] % md + c[i] % md) % md;
  }

  cout << d[xx] % md << endl;

}