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

int main() {
  int n, m;
  cin >> n >> m;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }   
  sort(a, a + n);
  int sum = 0;
  for(int i = 0; i < m; i++) {
    if(a[i] > 0) break;
    sum += abs(a[i]);
  }
  cout << sum << endl;
}