#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <typeinfo>
#include <fstream>
#include <iostream>
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
#include <cstdlib>
#include <iomanip>

using namespace std;
long long a[1234567];
map<long long, int> mp;

int main() {
  int n;
  cin >> n;
  
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }

  sort(a, a + n);
  long long small = 0, big = 0;
  small = mp[a[0]];
  big = mp[a[n - 1]];
  if(a[0] == a[n - 1]) {
    cout << a[n - 1] - a[0] << " " << (1LL * small * (small - 1)) / 2 << endl;
  }
  else {
    cout << a[n - 1] - a[0] << " " << 1LL * small * big << endl;
  }

}