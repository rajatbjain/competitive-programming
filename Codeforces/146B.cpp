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

int luckyRepresentation(int a) {
  string s;
  while(a) {
    int cur = a % 10;
    if(cur == 7 || cur == 4) {
       s += cur + '0';
    }
    a /= 10;
  }
  int sz = s.size();
  int ret = 0;
  for(int i = sz - 1; i >= 0; i--) ret = ret * 10 + (s[i] - '0');
  return ret;
}

int main() {
  ios_base::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  if(b > a) {
    cout << b << endl;
    return 0;
  }
  a++;
  for( ; ; a++) {
    if(luckyRepresentation(a) == b) {
      cout << a << endl;
      return 0;
    }
  }
  return 0;
}
