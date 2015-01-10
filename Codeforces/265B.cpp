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

int h[100010];

#define d(b) cout << #b << " " << b << endl;

int main() {
  // freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    scanf("%d", h + i);
  }
  long long ans = 0;
  ans += h[0] + 1;
  for(int i = 1; i < n; i++) {
    if(h[i - 1] > h[i]) {
      ans += h[i - 1] - h[i] + 2;
    }    
    else {
      ans += h[i] - h[i - 1] + 2;
    }
  }

  cout << ans << endl;
}