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
#include <cassert>

using namespace std;

int cost = 0;

int req[100010];

int dist(int a, int b) {
  int fw = 0, bw = 0;
  const int d = 26;
  int tmp = a;
  while(tmp != b) {
    tmp = (tmp - 1 + 26) % 26;
    fw++;
  }
  tmp = a;
  while(tmp != b) {
    tmp = (tmp + 1) % 26;
    bw++;
  }
  return min(fw, bw);
}

int main() {
  ios_base::sync_with_stdio(0);
  int n, p;
  cin >> n >> p;
  string s;
  cin >> s;
  s = '#' + s;
  bool ok = true;
  for(int i = 1, j = n; i < j; i++, j--) {
    if(s[i] != s[j]) {
      ok = false;
      break;
    } 
  }
  if(ok) {
    cout << 0 << endl;
    return 0;
  }
  int m = n / 2;
  if(n & 1 && p == m + 1) {
    p--;
    cost++;
  } 
  else if(p > m) {
    p = n - p + 1;
  }
  int l = 1, r = m;
  for(int i = 1; i <= m; i++) {
    if(s[i] != s[n - i + 1]) {
      req[i] = req[n - i + 1] = dist(s[i] - 'a', s[n - i + 1] - 'a');
    }
  }
  for(int i = 1; i <= m; i++) {
    if(s[i] != s[n - i + 1]) {
      l = i;
      break;
    }
  }
  l = min(l, p);
  for(int i = m; i >= 1; i--) {
    if(s[i] != s[n - i + 1]) {
      r = i;
      break;
    }
  }
  r = max(r, p);
  for(int i = 1; i <= m; i++) 
    cost += req[i];
  int ff = 2 * (r - p) + (p - l);
  int ss = 2 * (p - l) + (r - p);
  if(cost == 0) {
    cout << 0 << endl;
  }
  else {
    cout << min(ff, ss) + cost << endl;
  }
  return 0;
}