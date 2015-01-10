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

const int N = 3;
int a[N][N];
int sum[N];

int main() {
  // freopen("input.txt", "r", stdin);

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cin >> a[i][j];
      sum[i] += a[i][j];
    }
  }

  long long res = sum[0] + sum[1] + sum[2];
  res = res / 2;

  a[0][0] = res - sum[0];
  a[1][1] = res - sum[1];
  a[2][2] = res - sum[2];

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

}