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

string go(int l, int r, string s) {
  string ret;
  int sz = s.size();
  for (int i = 0; i < l; i++) ret += s[i];
  for (int i = r + 1; i < sz; i++) ret += s[i];
  return ret;
}

int main() {
  ios_base::sync_with_stdio(0);
  string s;
  cin >> s;
  int sz = s.size();
  for (int i = 0; i < sz; i++) {
    for (int j = i; j < sz; j++) {
      string tmp = go(i, j, s);
      if (tmp == "CODEFORCES") {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
  return 0;
}