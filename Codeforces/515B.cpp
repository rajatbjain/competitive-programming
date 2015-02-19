#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>

using namespace std;

bool a[123]; 
bool f[123];

int main() {
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  for(int i = 0; i <= n; i++) {
    a[i] = false;
  }
  for(int i = 0; i <= m; i++) {
    f[i] = false;
  }
  int b;
  cin >> b;
  while(b--) {
    int x;
    cin >> x;
    a[x] = true;
  }
  int g;
  cin >> g;
  while(g--) {
    int x;
    cin >> x;
    f[x] = true;
  }
  for(int i = 0; i < 1000000; i++) {
    int ii = i % n;
    int jj = i % m;
    a[ii] = f[jj] = a[ii] | f[jj];
  }
  for(int i = 0; i < max(n, m); i++) {
    int ii = i % n;
    int jj = i % m;
    if(!a[ii] || !f[jj]) {
      cout << "No\n";
      return 0;
    } 
  }
  cout << "Yes\n";
  return 0;
}