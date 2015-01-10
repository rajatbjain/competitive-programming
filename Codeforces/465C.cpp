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
  // freopen("input.txt", "r", stdin);
  int n, p;
  scanf("%d %d", &n, &p);
  string s, k;
  cin >> s;
  k = s;
  char ul = p + 'a';
  int N = s.size();
  for(int i = N - 1; i >= 0; i--) {
    for(char itr = s[i] + 1; itr < ul; itr++ ) {
      if((i > 0 && s[i - 1] == itr) || (i > 1 && s[i - 2] == itr)) continue;
      s[i] = itr;
      for(int j = i + 1; j < n; j++) {
        for(int ch = 'a'; ch < ul; ch++) {
          if((j > 0 && s[j - 1] == ch) || (j > 1 && s[j - 2] == ch)) continue;
          s[j] = ch;
          break;
        }
      }
      cout << s << endl;
      return 0;
    }
  }
  puts("NO");
}