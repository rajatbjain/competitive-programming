#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  string s;
  cin >> s;
  int k, ans = 0;
  cin >> k;
  s += string(k, '?');
  s = '#' + s;
  int n = s.size();
  n--;
  for(int start = 1; start <= n; start++) {
    for(int end = start + 1; end <= n; end++) {
      bool ok = true;
      int i = start;
      int j = ((start + end) % 2 ? (start + end) / 2 + 1 : (start + end) / 2 );
      int mid = start + j;
      int cnt = 0;
      for(; i < mid && j <= end; i++, j++) {
        if(s[i] == s[j]) continue;
        else if(s[j] == '?') continue;
        ok = false;
        break;
      }
      if(ok) {
        ans = max(ans, (end - start + 1));
      }
    }
  }
  cout << (ans % 2 == 0 ? ans : ans - 1) << endl;
}