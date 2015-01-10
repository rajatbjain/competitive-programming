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

long long modPw(long long a, long long b) {
  if(b == 0) return 1;
  if(b == 1) return a;
  long long foo = (b & 1 ? a : 1);
  long long ans = modPw(a, b >> 1);
  return ans * ans * foo;
}

int main() {
  int n; string s;
  cin >> n >> s;
  long long c = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'B' || s[i] == 'b') {
      c += modPw(2, i);
    }
  } 

  cout << c << endl;
}


