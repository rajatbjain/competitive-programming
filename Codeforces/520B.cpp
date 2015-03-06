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

#define long long long
#define lld I64d

using namespace std;

int main() {
  long n, m;
  cin >> n >> m;
  if(n >= m) {
    cout << n - m << endl;
    return 0;
  }
  int ans = 0;
  while(m != n) {
    if(m % 2 == 0) m /= 2;
    else m++;
    ans++;
    if(n >= m) {
      cout << n - m + ans << endl;
      return 0;
    }
  } 
  cout << ans << endl;
  return 0;
}