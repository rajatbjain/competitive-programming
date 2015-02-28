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

string s, t;

bool better(const string &s, const string &t) {
  if(s.size() > t.size()) return true;
  else if(s.size() == t.size()) return s >= t;
  else return false;
}

int main() {
  cin >> s;
  int sz = s.size();
  if(sz % 2) sz++;
  while(true) {
    t = string(sz / 2, '4');
    t += string(sz / 2, '7');
    do {
      if(better(t, s)) {
        cout << t << '\n';
        return 0;
      }
    } while(next_permutation(t.begin(), t.end()));
    sz += 2;
  }
  return 0;
}