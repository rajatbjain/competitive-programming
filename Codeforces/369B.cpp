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

map<int, int> mp;

int main() {
  housekeeping();
  int n, k, l, r, s, sk;
  cin >> n >> k >> l >> r >> s >> sk;

  for(int i = 0; i < k; i++) {
    int j = 0;
    if(i < sk % k) j = 1;
    cout << (sk / k) + j << " ";
  }
  s -= sk;
  for(int i = 0; i < n - k; i++) {
    int j = 0;
    if(i < s % (n - k)) j = 1;
    cout << (s / (n - k)) + j << " ";
  }
  return 0;
}