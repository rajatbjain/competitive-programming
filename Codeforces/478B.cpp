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
  long long Min = 0, Max = 0;
  long long cx = n / m - 1;
  long long cy = n % m;
  long long ay = ((long long)cy * (long long)((cx + 1) * (cx + 2))) / 2;
  long long ax = ((long long)(m - cy) * ((long long)cx * (cx + 1))) / 2;
  Min = ax + ay;
  Max = (long long) (n - m);
  Max = (long long)(Max * (Max + 1)) / 2;

  cout << Min << " " << Max << endl; 

}