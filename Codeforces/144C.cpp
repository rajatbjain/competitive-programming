#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>	
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>
using namespace std;

int n[26], c[26];

int foo() {
  for(int i=0; i<26; ++i){
    if(c[i] > n[i]) return 0;
  }
  return 1;
}

int main() {
  // freopen("input.txt", "r", stdin);
  string s, p;
  cin >> s >> p;
  if(p.size() > s.size()) {
    cout << "0\n"; return 0;
  }
  for(int i = 0; i<p.size(); ++i) {
    if(p[i] != '?') ++n[p[i] - 'a'];
  }
  for(int i = 0; i<p.size(); ++i) {
    if(s[i] != '?') ++c[s[i] - 'a'];
  }
  int sol = foo();
  for(int i = p.size(), j = 0; i < s.size(); ++i, ++j) {
    if(s[j] != '?')
      --c[s[j] - 'a'];
    if(s[i] != '?')
      ++c[s[i] - 'a'];
    sol += foo();
  }
  cout << sol << endl;
  return 0;
}