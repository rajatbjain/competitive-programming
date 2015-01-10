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

#define d(b) cout << #b << " " << b << endl;
int a[123456];

int main() {
  int n, m; long long t = 0;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++) {
    scanf("%d", a + i);
  }  

  int at = 1;
  for(int i = 0; i < m; i++) {
    if(a[i] == at) continue;
    else if(a[i] < at) {
      t += (n - at) + a[i];
      at = a[i];
    }
    else {
      t += a[i] - at;
      at = a[i];
    }
  }

  cout << t << endl;
}