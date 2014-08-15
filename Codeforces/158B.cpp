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

int main() {
	int n;
  cin >> n;
  vector<int> a(5);
  long long sum = 0;
  for(int i = 0; i < n; i++) {
    int val;
    cin >> val;
    ++a[val];  
  }
  sum += a[4];
  a[4] = 0;
  int v = min(a[1], a[3]);
  sum += v;
  a[1] = (v > a[1] ? 0 : a[1] - v);
  a[3] = (v > a[3] ? 0 : a[3] - v);

  sum += ((a[2] - (a[2]%2)) >> 1);

  a[2] = (a[2]%2);
  
  if(a[2] > 0) {
    sum += 1;
    a[2] = 0;
    a[1] -= 2;
  }

  if(a[3] > 0) {
    sum += a[3];
  }

  if(a[1] > 0) {
    sum += (a[1] / 4);
    a[1] %= 4;
    if(a[1]) sum++;
  }

  cout << sum << endl;

}