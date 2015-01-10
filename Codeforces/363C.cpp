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
  string s;
  cin >> s;
  string c;
  c = s.substr(0, 2);
  for(int i = 2; i < (int) s.size(); i++) {
    int x = c.size() - 1, y = x - 1, z = y - 1;
    if(c[y] == c[x] && c[x] == s[i]) continue;
    if( i == 2 ) {
      c += s[i];
      continue;
    }
    if(c[z] == c[y] && c[x] == s[i]) continue;
    c += s[i];
  }
  cout << c << endl;
}