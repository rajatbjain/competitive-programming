#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

void housekeeping() {
  ios_base::sync_with_stdio(false);
  freopen("input.txt", "r", stdin);
}

const int md = 1000003;

map<char, string> mp;
void init() {
mp['>'] = 1000,
mp['<'] = 1001,
mp['+'] = 1010,
mp['-'] = 1011,
mp['.'] = 1100,
mp[','] = 1101,
mp['['] = 1110,
mp[']'] = 1111;
}

int main() {
  housekeeping();
  init();
  string s;
  cin >> s;
  string t;
  for(int i = 0; i < s.size(); i++) {
    t += mp[s[i]];
  }
  long long ans = 0;
  for(int i = t.size() - 1, j = 0; i >= 0; i--, j++) {
  }
}