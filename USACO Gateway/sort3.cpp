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

#define INPUT(file_name) freopen(file_name, "r", stdin);
#define OUTPUT(file_name) freopen(file_name, "w", stdout);
#define d(b) cout << #b << " " << b << endl;

int b[5][5];

int main() {
  INPUT("sort3.in");
  OUTPUT("sort3.out");

  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[0][a[i]]++;
  }

  int x = b[0][1] - 1; // 0 - x == 1
  int y = x + b[0][2]; // x + 1 - y == 2
  int z = y + b[0][3]; // y + 1 - n - 1 == 3

  for(int i = 0; i <= x; i++) b[1][a[i]]++;

  for(int i = x + 1; i <= y; i++) b[2][a[i]]++;

  for(int i = y + 1; i <= z; i++) b[3][a[i]]++;

  int ex = 0, tmp;
  
  tmp = min(b[1][2], b[2][1]);
  b[1][2] -= tmp;
  b[2][1] -= tmp;
  ex += tmp;
  // d(ex);
  tmp = min(b[1][3], b[3][1]);
  b[1][3] -= tmp;
  b[3][1] -= tmp;
  ex += tmp;
  // d(ex);
  tmp = min(b[2][3], b[3][2]);
  b[2][3] -= tmp;
  b[3][2] -= tmp;
  ex += tmp;
  // d(ex);
  tmp = (b[1][2] + b[1][3] + b[2][1] + b[2][3] + b[3][1] + b[3][2]) >> 1;
  ex += (tmp == 0 ? 0 : tmp + 1);
  // d(ex);
  printf("%d\n", ex);
}