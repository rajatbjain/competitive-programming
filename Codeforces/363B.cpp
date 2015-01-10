#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

int a[1234567];
long long sum[1234567];
int pos = 0;

int main() {
  // freopen("input.txt", "r", stdin);
  int n, k;
  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; i++) scanf("%d", a + i);
  for(int i = 1; i <= n; i++) 
    sum[i] = (long long)(sum[i - 1] + a[i]);

  long long ans = 123456789;

  for(int i = 1; i + k - 1 <= n; i++) {
    long long tmp = sum[i + k - 1] - sum[i - 1];
    if(tmp < ans) ans = tmp, pos = i ;
  }

  cout << pos << endl;
}