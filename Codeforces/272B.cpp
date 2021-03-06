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

int n;
int a[100010];

map<int, int> mp;

int f(int x) {
  if(x == 0) return 0;
  if(x == 1) return 1;
  
  if(x % 2) {
    x--;
    return f(x / 2) + 1;
  }
  else return f(x / 2);
}


int main() {
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    int foo;
    scanf("%d", &foo);
    foo = f(foo);
    mp[foo]++;
    // cout << foo << " \n";
  }
  map<int, int>::iterator it;
  long long ans = 0;
  for(it = mp.begin(); it != mp.end(); it++) {
    long long w = it->second;
    w--;
    ans +=  (w * (w + 1)) / 2;
  }
  cout << ans << endl;
}