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
  int tt;
  scanf("%d", &tt);
  while(tt--) {
    long long foo;
    cin >> foo;
    if(foo % 2 == 1) {
      int at = foo / 2 + 1;
      if(at % 2) cout << 2LL * foo + 1 << endl;
      else cout << foo + 1LL << endl;
    }
    else {
      cout << 4LL * foo + 1LL << endl;  
    }
  } 
  return 0;
}