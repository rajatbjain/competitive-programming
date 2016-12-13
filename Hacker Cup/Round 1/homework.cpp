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

int a[10000101];

void sieve() {

  for(int i = 2; i <= 10000010; i++) {
    if(a[i] == 0) {
      a[i]++;
      for(int j = i + i; j <= 10000010; j += i) {
        a[j]++;
      }
    }
  }
}

int main() {

  sieve();

  int tt;
  cin >> tt;
  for(int i = 1; i <= tt; i++) {
    int u, v, k, ans = 0;
    cin >> u >> v >> k;
    cout << "Case #" << i << ": ";
    for(; u <= v; u++) {
      if(a[u] == k) ans++;
    }

    cout << ans << endl;
  }

}