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

bool ispalin(string w) {
  for(int i = 0, j = w.size() - 1; i <= j; i++, j--) {
    if(w[i] != w[j]) return false;
  }
  return true;
}

int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    string s, u, v;
    cin >> s;
    bool palin = true;
    for(int i = 0, j = s.size() - 1; i <= j; i++, j--) {
      if(s[i] != s[j]) {
        u = s;
        v = s;
        u.erase(u.begin() + i);
        v.erase(v.begin() + j);
        palin = false;
        break;
      }
    }

    if(palin || ispalin(u) || ispalin(v)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}