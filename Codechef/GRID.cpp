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

bool see[1010][1010][2]; // 0-x 1-y

int main() {
  // freopen("input.txt", "r", stdin);
  int tt;
  scanf("%d", &tt);
  while(tt--) {
    int n, cnt = 0;
    scanf("%d", &n);

    char a[n][n];
    for(int i = 0; i < n; i++) {
      scanf("%s", a[i]);
    }

    for(int j = 0; j < n; j++) {
      bool fill = true; 
      for(int i = n - 1; i >= 0; i--) {
        if(a[i][j] == '#') {
          fill = false;
        }
        see[i][j][0] = fill;
      }
    }

    for(int i = 0; i < n; i++) {
      bool fill = true;
      for(int j = n - 1; j >= 0; j--) {
        if(a[i][j] == '#') {
          fill = false;
        }
        see[i][j][1] = fill;
      }
    }

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(see[i][j][0] && see[i][j][1]) cnt++;
      }
    }

    printf("%d\n", cnt);
  }
}