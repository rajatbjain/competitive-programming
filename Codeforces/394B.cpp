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

const int N = 1000010;

string s, ans, beg;
int x;

void verify(const string& s) {
  string t;
  int sz = s.size();
  int carry = 0;
  for (int i = sz - 1; i >= 0; i--) {
    int cur = s[i] - '0';
    int u = cur * x + carry;
    t += u % 10 + '0';
    carry = u / 10;
  }
  reverse(t.begin(), t.end());
  if (t.front() == s.back() && carry == 0) {
    cout << s << endl;
  }
  else cout << "Impossible" << endl;
  exit(0);
}

int main() {
  ios_base::sync_with_stdio(false);  
  int p;
  cin >> p >> x;
  for (int i = 0; i < p; i++) ans += "9";
  for(int fix = 1; fix <= 9; fix++) {
    int cur = fix;
    int carry = 0;
    s += fix + '0';
    for(int i = 0; i < p; i++) {
      int tmp = cur * x + carry;
      int base = tmp % 10;
      carry = tmp / 10;
      if(i == p - 1) break;
      s += base + '0';
      cur = base;
    }
    reverse(s.begin(), s.end());
    if (s.front() != '0' && s.back() - '0' == fix && carry == 0) {
      ans = min(ans, s);
    }
    s = "";
  }
  verify(ans);
  return 0;
}