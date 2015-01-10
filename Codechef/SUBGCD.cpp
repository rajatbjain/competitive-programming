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

int a[100010];

int gcd(int a, int b) {
  if(b == 0) return a;
  else return gcd(b, a % b);
}

#define d(b) cout << #b << " " << b << endl;


int main() {
  // freopen("input.txt", "r", stdin);

  int tt;
  scanf("%d", &tt);
  while(tt--) {
    
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
      scanf("%d", a + i);
    }

    bool ok = false;
    for(int i = 1; i < n; i++) {
      if(gcd(a[i - 1], a[i]) == 1) {
        ok = true;
      }
    }

    if(ok) printf("%d\n", n);
    else puts("-1");
  }
}