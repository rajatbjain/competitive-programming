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

int main() {
  // freopen("input.txt", "r", stdin);
  string s;
  bool ok = true;
  for(int i = 0; i < 8; i++) {
    cin >> s;
    int b = 0, w = 0;
    for(int j = 0; j < s.size(); j++) {
      if(s[j] == 'B') b++;
      if(s[j] == 'W') w++;
    }
    if(b != 4 && w != 4) {
      ok = false;
    }
    if(s.find("BB") != string::npos || s.find("WW") != string::npos) {
      ok = false;
    }
  }
  if(ok) cout << "YES\n";
  else cout << "NO\n";
}