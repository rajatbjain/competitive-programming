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
  int n;
  scanf("%d", &n);
  string s;
  cin >> s;
  long long ans = 0;
  for(int i= 0 ; i < n; i++) {
    if(s[i] != '0') {
      ans++;
    }
    else {
      ans++;
      break;
    }
  }

  printf("%I64d\n", ans);
}
