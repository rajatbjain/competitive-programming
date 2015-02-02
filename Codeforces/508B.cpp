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

  for(int i = 0; i < (int) s.size(); i++) {
    if((s[i] - '0') % 2 == 0) {
      int x = s[i] - '0';
      int y = s[s.size() - 1] - '0';
      if(x < y) {
        swap(s[i], s[s.size() - 1]);
        cout << s << '\n';
        return 0;
      }
    }
  }

  for(int i = s.size() - 1; i >= 0; i--) {
    if((s[i] - '0') % 2 == 0) {
      int x = s[i] - '0';
      int y = s[s.size() - 1] - '0';
      if(x > y) {
        swap(s[i], s[s.size() - 1]);
        cout << s << '\n';
        return 0;
      }
    }
  }

  cout << "-1" << endl;

}