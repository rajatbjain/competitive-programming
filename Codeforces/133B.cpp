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

map< char, string > a;
map< string, int > b;
void init() {
  a['>'] = "1000";
  a['<'] = "1001";
  a['+'] = "1010";
  a['-'] = "1011";
  a['.'] = "1100";
  a[','] = "1101";
  a['['] = "1110";
  a[']'] = "1111";
  b["000"] = 0;
  b["001"] = 1;
  b["010"] = 2;
  b["011"] = 3;
  b["100"] = 4;
  b["101"] = 5;
  b["110"] = 6;
  b["111"] = 7;
}

const int mod = (int)1e6 + 3;

int main() {
  init();
  string s;
  cin >> s;
  string t = "";
  for(int i = 0; i < s.size(); i++) {
    t += a[s[i]];
  }    
  int sz = t.size();
  int num = 0;
  int mul = 1;
  for(int i = sz - 1; i >= 0; i--) {
    if(t[i] == '1') {
      num += mul;
      num %= mod;
    }
    mul <<= 1;
    mul %= mod;
  }
  printf("%d\n", num);
  return 0;
}