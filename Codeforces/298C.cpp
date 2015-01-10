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

int calc(const string &s) {
  int cnt = 0;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '1') {
      cnt++;
    }
  }
  return cnt;
}

int main() {
  housekeeping();
  string a, b;
  cin >> a >> b;
  int one_a = calc(a);
  int one_b = calc(b);
  if(one_a & 1) one_a++;
  if(one_a >= one_b) {
    puts("YES");
  }
  else puts("NO");
}