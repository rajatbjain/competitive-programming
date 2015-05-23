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

int a[1234567];

int main() {
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x]++;
  }
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    while(a[i] > 1) {
      for (int at = i + 1; at < 1234567; at++) {
        if (a[at] == 0) {
          a[at] = 1;
          cnt += at - i;
          break;
        }
      }
      a[i]--;
    }
  }
  cout << cnt << endl;
  return 0;
}