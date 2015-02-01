#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
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
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);

  int tt;
  cin >> tt;

  while(tt--) {
    int n;
    cin >> n;
    vector< int > a(n, 0);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    int sum = 0;
    for(int i = a.size() - 1; i >= 0; i -= 4) {
      if(i == 0) {
        sum += a[i];
      } else {
        sum += a[i] + a[i - 1];
      }
    }
    cout << sum << endl;
  }

}