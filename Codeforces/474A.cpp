#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
}

string t = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main() {
  housekeeping();
  char ch; string s;
  cin >> ch >> s;
  if(ch == 'L') {
    for(int i = 0; i < s.size(); i++) {
      int idx = t.find(s[i]);
      cout  << t[idx + 1];
    }
  }
  else {
    for(int i = 0; i < s.size(); i++) {
      int idx = t.find(s[i]);
      cout << t[idx - 1];
    }
  }
}