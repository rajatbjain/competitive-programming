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

int key[26];

int main() {
  ios_base::sync_with_stdio(false);
  int sz;
  string s;
  cin >> sz >> s;
  int ans = 0;
  sz = s.size();
  for (int i = 0; i < sz; i++) {
    if (i % 2 == 0) {
      key[s[i] - 'a']++;
    }
    else {
      int ch = s[i] - 'A';
      if (key[ch]) key[ch]--;
      else ans++;
    }
  }
  cout << ans << endl;
  return 0;
}