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

int f[26];

int main() {
  string s;
  int n = 0;
  cin >> s;
  for(int i = 0; i < s.size(); i++) {
    f[s[i] - 'a']++;
  }
  for(int i = 0; i < 26; i++) {
    if(f[i] & 1) {
      n++;
    }
  }
  if(n & 1 || n == 0) {
    cout << "First\n";
    return 0;
  }
  cout << "Second\n";
  return 0;
}