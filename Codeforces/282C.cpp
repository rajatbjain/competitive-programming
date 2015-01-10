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

bool search(string &a) {
  for(int i = 0; i < (int) a.size(); i++) if(a[i] == '1') return true;

  return false;
}

int main() {

  string s, t;
  cin >> s >> t;
  if(s.size() != t.size()) {
    puts("NO");
    return 0;
  }
  int N = s.size();

  if(N == 1) {
    puts(s == t ? "YES" : "NO");
    return 0;
  }

  bool a = search(s);
  bool b = search(t);

  if(!a && !b) {
    puts("YES");
    return 0;
  }
  else if ((!a && b) || (a && !b)){
    puts("NO");
    return 0;
  }
  else if(a && b) {
    puts("YES");
    return 0;
  }
}