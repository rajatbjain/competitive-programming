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

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
}

int c[5], bb, tt;
int b[1010], t[1010];

int main() {
  housekeeping();
  for(int i = 1; i < 5; i++) scanf("%d", c + i);
  scanf("%d %d", &bb, &tt);
  for(int i = 0; i < bb; i++) scanf("%d", b + i);
  for(int i = 0; i < tt; i++) scanf("%d", t + i);

  int best = 0;
  int tmp = 0;
  for(int i = 0; i < bb; i++) {
    tmp += min(b[i] * c[1], c[2]);
  }
  tmp = min(tmp, c[3]);
  best = tmp;
  tmp = 0;
  for(int i = 0; i < tt; i++) {
    tmp += min(t[i] * c[1], c[2]);
  }
  tmp = min(tmp, c[3]);
  best += tmp;
  best = min(best, c[4]);
  cout << best << endl;
}