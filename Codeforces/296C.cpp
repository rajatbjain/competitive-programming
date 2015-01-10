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

long long n, m, k;
long long a[100010];
long long virtual_sum[100010];
pair< pair< long long, long long >, long long > b[100010];
long long addend[100010];

inline void push_pair(pair< pair< long long, long long >, long long > &a, long long x, long long y, long long z) {
  a.first.first = x;
  a.first.second = y;
  a.second = z;
}

int main() {
  cin >> n >> m >> k;
  
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for(int i = 1; i <= m; i++) {
    int l, r, d;
    cin >> l >> r >> d;
    push_pair(b[i], l, r, d);
  }
  
  while(k--) {
    long long foo, bar;
    cin >> foo >> bar;
    addend[foo]++;
    addend[bar + 1]--;
  }

  for(int i = 1; i <= m; i++) {
    addend[i] += addend[i - 1];
    virtual_sum[ b[i].first.first ] += addend[i] * b[i].second;
    virtual_sum[ b[i].first.second + 1] += -addend[i] * b[i].second; 
  }

  for(int i = 1; i <= n; i++) {
    virtual_sum[i] += virtual_sum[i - 1];
    cout << a[i] + virtual_sum[i] << " ";
  }
  cout << endl;
}