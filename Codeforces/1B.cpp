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
int x, y;
const int md = 26;

string foo() {
  string t = "";
  while(x) {
    t = (char)('A' + (--x % md)) + t;
    x /= md;
  }
  return t;
}

int bar(string t) {
  int xx = 0;
  for(int i = 0; i < (int) t.size(); i++) {
    xx = xx * md + (t[i] - 'A' + 1);
  }
  return xx;
}

int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    string s;
    cin >> s;
    int N = s.size();
    int at = 0;
    for(int i = 1; i < N; i++) {
      if(s[i] == 'C' && (s[i - 1] >= '0' && s[i - 1] <= '9')) {
        at = i;
        break;
      }
    }
    if(at > 1) {
      s[0] = s[at] = ' ';
      istringstream ss(s);
      ss >> y >> x; 
      // cout << x << " " << y << endl;
      cout << foo() << y << endl;
    }
    else {
      string col = ""; int row = 0;
      for(int i = 0; i < N; i++) {
        if(s[i] >= '1' && s[i] <= '9') break;
        col += s[i];
        s[i] = ' ';
      }
      istringstream ss(s);
      ss >> row;
      cout << "R" << row << "C" << bar(col) << endl;
    }
  }
}