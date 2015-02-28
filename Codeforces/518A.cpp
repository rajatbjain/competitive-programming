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

int main() {
  cin >> s >> t;
  int sz = s.size() - 1;
  while(s[sz] == 'z') {
    s[sz] = 'a';
    sz--;
  }
  s[sz]++;
  if(s < t) {
    cout << s << endl;
    return 0;
  }
  puts("No such string\n");
  return 0;
}