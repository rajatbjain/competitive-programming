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

int n, m, k;
#define d(b) cout << #b << " " << b << endl;

string toBinary(int n) {
  string s;
  while(n) {
    int x = n % 2;
    n /= 2;
    s += x + '0';
  }
  reverse(s.begin(), s.end());
  return s;
}

bool hamming(string t, string s) {
  if(t.size() < n) {  
    string tmp;
    int x = t.size();  
    while(x < n ) {
      tmp += 0 + '0';
      x++;
    } 
    t = tmp + t;
  }
  if(s.size() < n) {
    string tmp;
    int x = s.size();
    while(x < n) {
      tmp += 0 + '0';
      x++;
    }
    s = tmp + s;
  }

  // d(t); d(s);
  int c = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == '1') {
      if(t[i] == '0') c++;
      continue;
    }

    if(t[i] == '1') {
      if(s[i] == '0') c++;
      continue;
    }
  }
  // d(c);
  if(c <= k) return true;
  else return false;
}

int main() {
  // freopen("input.txt", "r", stdin);
  cin >> n >> m >> k;
  int a[m], player;
  string ss[m];
  for(int i = 0; i < m; i++) {
    cin >> a[i];
    ss[i] = toBinary(a[i]);
  }
  cin >> player;
  string s, t;
  int f = 0;
  s = toBinary(player);
  for(int i = 0; i < m; i++) {
    bool ok = hamming(ss[i], s);
    if(ok) f++;
  }

  cout << f << endl;
}