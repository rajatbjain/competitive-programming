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

int n, m;
int a[1010];
long long cost = 0;
  
int main() {
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> a[i + 1];
  }
  for(int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    cost += min(a[x], a[y]);
  }
  cout << cost << endl;
}