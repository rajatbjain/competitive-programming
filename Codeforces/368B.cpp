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

map<int, int> hash;
int a[100010], dp[100010];

int main() {
  // freopen("input.txt", "r", stdin);
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  } 
  for(int i = n - 1; i >= 0; i--) {
    hash[a[i]] = 1;
    dp[i] = hash.size();
  } 

  for(int i = 0; i < m; i++) {
    int idx;
    cin >> idx;
    cout << dp[idx - 1] << endl;
  }
}