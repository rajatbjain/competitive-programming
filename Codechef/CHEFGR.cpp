#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
}

int a[123];

int main() {
  housekeeping();
  int tt;
  cin >> tt;
  while(tt--) {
    int n, m;
    cin >> n >> m;
    int mx = -1;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(mx < a[i]) {
        mx = a[i];
      }
    }
    int diff = 0;
    for(int i = 0; i < n; i++) {
      diff += mx - a[i];
    }
    m -= diff;
    if(m < 0) {
      puts("No");
    }
    else if(m % n == 0) {
      puts("Yes"); 
    }
    else puts("No");
  } 
}