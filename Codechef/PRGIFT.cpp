#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>  
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

int main() {
  // freopen("input.txt", "r", stdin);
  int t;
  scanf("%d", &t);
  while(t--) {
    int n , k, cnt = 0;
    cin >> n >> k;
    
    int a[n];
    
    for(int i = 0; i < n; i++) scanf("%d", a+i);

    for(int i = 0; i< n; i++)
      if((a[i]&1) == 0) ++cnt;

    int odd = n - cnt;

    if(k == 0) {
      if(odd > 0) cout << "YES\n";
      else cout << "NO\n";
    }
    else {
      if(k <= cnt) cout << "YES\n";
      else cout << "NO\n";
    }
    
  }
}