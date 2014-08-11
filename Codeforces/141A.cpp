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

void prep(string s, int* f) {
  for(int i = 0; i < s.size(); i++) {
    f[s[i] - 'A']++;
  }
}

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  int f[26] = {0}, cnt[26] = {0};

  prep(a, f); prep(b, f);
  prep(c, cnt);

  for(int i = 0; i < 26; i++) {
    if(f[i] != cnt[i]) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";
  return 0;
}