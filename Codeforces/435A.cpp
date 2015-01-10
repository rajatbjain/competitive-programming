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
  int n, m;
  cin >> n >> m;
  int a[n];

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }  

  int bus = 0;
  int guy = 0;

  for(int i = 0; i < n;) {
    if(guy + a[i] <= m) {
      guy += a[i];
      i++;
    }
    else {
      bus++;
      guy = 0;
    }
  }

  if(guy) bus++;

  cout << bus << endl;  
}