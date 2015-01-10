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

long long calc(int n, int r) {
  n++, r++;
  vector< vector< int > > tbl(100, vector< int > (100, 0));
  for(int i = 0; i <= n + 10; i++) tbl[i][0] = 1;
  for(int i = 0; i <= n; i++) tbl[0][i] = 1;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j < i; j++) {
      tbl[i][j] = tbl[i - 1][j - 1] + tbl[i - 1][j];
    }
  } 
  return tbl[n][r - 1];
}

int main() {
  int B, G, T;
  cin >> B >> G >> T;
  long long ans = 0;
  for(int i = T - 1, j = 1; i >= 4; i--, j++) {
    // cout << i << " " << j << endl;
    // long long A = calc(B, i);
    // long long B = calc(G, j);
    // cout << A << " " << B << endl;
    ans += calc(B, i) * calc(G, j);
  }
  cout << ans << endl;
}