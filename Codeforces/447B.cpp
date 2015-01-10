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

string a;
int k, f[26];

int main() {
  housekeeping();
  cin >> a;
  cin >> k;
  for(int i = 0; i < 26; i++) {
    cin >> f[i];
  }
  int N = a.size();
  long long ans = 0;
  int i;
  for(i = 0; i < N; i++) {
    ans += (i + 1) * (f[a[i] - 'a']);
  }
  sort(f, f + 26);
  for(; i < k + N; i++) {
    ans += (i + 1) * f[25];
  }
  cout << ans << endl;
}