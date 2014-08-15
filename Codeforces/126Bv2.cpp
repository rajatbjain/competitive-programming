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
  string s;
  cin >> s;
  int n = s.size();
  vector<int> z(n, 0);
  z[0] = 0;
  for(int i = 1, l = 0, r = 0; i < n; i++) {
    if(i <= r) {
      z[i] = min (z[i - l], r - i + 1);
    }
    while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
      z[i]++;
    }

    if(i + z[i] - 1 > r) {
      l = i, r = i + z[i] - 1;
    }
  }
  int mm = 0, pos = 0;
  for(int i = 1; i < n; i++) {
    if(z[i] == n - i && mm >= n - i) {
      pos = n - i;
      break;
    }
    mm = max(mm, z[i]);
  }
  if(mm >= z[n - pos] && pos ) {
    cout << s.substr(0, pos) << endl;
  }
  else {
    cout << "Just a legend\n";
  }
}