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

int at[200010];
int put[200010];
string s;
int m;
int sz;

int main() {
  ios_base::sync_with_stdio(false);
  cin >> s;
  s = '#' + s;
  sz = s.size();
  cin >> m;
  sz--;
  while (m--) {
    int x;
    cin >> x;
    put[x]++;
    put[sz - x + 2]--;
  }
  for (int i = 1; i <= sz; i++) {
    put[i] += put[i - 1];
  }
  for (int i = 1; i <= sz; i++) at[i] = i;
  for (int i = 1; i * 2 <= sz; i++) {
    if (put[i] % 2) swap(at[i], at[sz - i + 1]);
  }
  for (int i = 1; i <= sz; i++) {
    cout << s[at[i]];
  }
  cout << endl;
  return 0;
}