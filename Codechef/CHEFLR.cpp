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

const long long md = 1000000007;

int main() {
  // freopen("input.txt", "r", stdin);
  int tt;
  scanf("%d", &tt);
  while(tt--) {
    long long node = 1;
    string s;
    cin >> s;
    stringstream ss(s);
    char c;
    long long stg = 1;
    while(ss >> c) {
      ++stg;
      if(stg & 1) {
        node = (node << 1) % md;
        if(c == 'l') node--;
        else node++;
      }
      else {
        node = (node << 1) % md;
        if(c == 'r') node += 2;
        else continue;
      }
    }

    printf("%I64d\n", node % md);
  }
}
