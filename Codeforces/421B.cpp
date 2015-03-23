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


int main() {
  ios_base::sync_with_stdio(false);
  int ok[] = {1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0};
  string s;
  cin >> s;
  int sz = s.size();
  vector< int > has(26);
  for (int i = 0; i < sz; i++) has[s[i] - 'A']++;
  bool ans = true;
  for (int i = 0; i < 26; i++) {
    if (has[i] && !ok[i]) ans = false;
  }
  for (int i = 0, j = sz - 1; i <= j; i++, j--) if (s[i] != s[j]) ans = false;
  puts(ans ? "YES" : "NO");
  return 0;
}
