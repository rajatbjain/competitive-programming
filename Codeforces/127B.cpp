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

int a[123];
int hs[123];

int main() {
  housekeeping();
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    hs[a[i]]++;
  }

  int f = 0, h = 0;
  for(int i = 1; i <= 100; i++) {
    if(hs[i] >= 2 && hs[i] < 4) h++;
    else if(hs[i] >= 4) {
      f += hs[i] / 4;
      hs[i] %= 4;
      if(hs[i] >= 2) h++;
    }
  }
  cout << f + h / 2 << endl;
}