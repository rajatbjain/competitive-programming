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

long long a[100010] = {0};
int f = 0, ff = 0;
int n, m;

int main() {
  freopen("input.txt", "r", stdin);
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++) {
    scanf("%lld", a + i);
  }
  while(m--) {
    char q; int idx;
    scanf("%c ", &q);
    scanf("%d", &idx);
    if(q == 'C') {
      ff = (ff + n - idx) % n;
    }
    else if(q == 'A') {
      ff = (ff + idx) % n;
    }
    else if(q == 'R') {
      idx--;
      int off = n - (ff - f);
      int ii = (idx + off) % n;
      cout << a[ii] << endl;
    }
  }
}
