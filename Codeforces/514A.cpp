#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <iomanip>
#include <utility>
#include <iostream>
#include <map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  string s;
  cin >> s;
  string t(s);
  int i = 0;
  for(auto ch: s) {
    s[i++] = min(ch - '0', 9 - (ch - '0')) + '0';
  }
  if(s[0] == '0') s[0] = t[0];
  cout << s << endl;
}