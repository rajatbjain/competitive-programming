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

string s;
int n, m;

void add(string& s, char ch, int &c, int by) {
  if(by == 0 || c == 0) return;
  s.push_back(ch);
  c--;
  by--;
  add(s, ch, c, by);
}

void check(const string& s, int n, int m) {
  int sz = s.size();
  int a = 0, b= 0;
  for(int i = 0; i < sz; i++) {
    if(s[i] == '0') a++;
    else b++;
  }
  assert(a == n && b == m);
}

void verify(const string& s) {
  int sz = s.size();
  int cur = 0;
  for(int i = 0; i < sz; i++) {
    char ch = s[i];
    switch(cur) {
    case 0:
      if(ch == '1') cur = 1;
      else if(ch == '0') cur = 4;
      break;
    case 1:
      if(ch == '1') cur = 2;
      else cur = 4;
      break;
    case 2:
      if(ch == '1') {
        cout << -1 << endl;
        cout << "Verified\n";
        exit(0);
      }
      else cur = 4;
      break;
    case 4:
      if(ch == '0') {
        cout << -1 << endl;
        cout << "Verified\n";
        exit(0);
      }
      else cur = 1;
      break;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n >> m;
  int nn = n, mm = m;
  int mid = ceil((double)m / 2) - 1;
  if(n < mid || n > m + 1) {
    cout << -1 << endl;
    return 0;
  }
  while(true) {
    int mid = ceil((double)m / 2) - 1;
    if(m == 0) break;
    if(n == mid) {
      add(s, '1', m, 2);
    }
    else {
      add(s, '1', m, 1);
    }
    add(s, '0', n, 1);
  }
  if(n > 1) {
    cout << -1 << endl;
    return 0;
  }
  if(n != 0) s = "0" + s, n--;
  verify(s);
  //check(s, nn, mm);
  cout << s << '\n';
  return 0;
}