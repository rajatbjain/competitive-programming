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
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  string ss(s);
  bool swaped = true;
  while(swaped) {
    swaped = false;
    int N = s.size();
    for(int i = 0; i < N - 1; i++) {
      if(s[i] == 'B' && s[i + 1] == 'G') {
        ss[i] = 'G';
        ss[i + 1] = 'B';
        swaped = true;
      }
      else continue;
    }
    s = ss;
    t--;
    if(!t) break;
  }

  cout << ss << endl;
}
