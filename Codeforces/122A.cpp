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

#define d(x) cout << #x << " " << x << endl;


bool check(int n) {
  while(n > 0) {
    int x = n % 10;
    n /= 10;
    if(x == 4 || x == 7) continue;
    else return false;
  }
  return true;
}

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 4; i <= n; i++) {
    if(!(n % i)) {
      bool ok = check(i);
      if(ok) {
        puts("YES");
        return 0;
      }
    }
  }

  puts("NO");
}