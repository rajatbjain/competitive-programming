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

int main() {
  string s, t;
  cin >> s >> t;
  if(s.size() != t.size()) {
    cout << "NO\n";
    return 0;
  }
  for(int i = 0, j = t.length()-1; i < s.length(); i++, j--) {
    if(s[i] != t[j]) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";
  return 0;
}