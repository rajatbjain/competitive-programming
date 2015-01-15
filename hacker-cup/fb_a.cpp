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

const string A = "999999999999", B = "-999999999999";
string smaller, bigger;

inline void init() {
  smaller = A;
  bigger = B;
}

inline void smallest(const string& s) {
  for(int i = 0; i < (int) s.size(); i++) {
    for(int j = i + 1; j < (int) s.size(); j++) {
      if(s[i] >= s[j]) {
        string t(s);
        swap(t[i], t[j]);
        if(t[0] == '0') continue;
        smaller = min(smaller, t);
      }
    }
  }
}

inline void biggest(const string& s) {
  for(int i = 0; i < (int) s.size(); i++) {
    for(int j = i + 1; j < (int) s.size(); j++) {
      if(s[i] <= s[j]) {
        string t(s);
        swap(t[i], t[j]);
        if(t[0] == '0') continue;
        bigger = max(bigger, t);
      }
    }
  }
}

int main() {
  int tt, Caseid = 0;
  cin >> tt;
  while(tt--) {
    init();
    string s;
    cin >> s;
    smallest(s);
    biggest(s);
    printf("Case #%d: %s %s\n", ++Caseid, (smaller == A ? s.c_str() : smaller.c_str()), (bigger == B ? s.c_str() : bigger.c_str()));
  }
}