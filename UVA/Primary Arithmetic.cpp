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
  // freopen("input.txt", "r", stdin);
  while(1) {

    long long a, b;
    cin >> a >> b;
    if(a == 0 && b == 0) break;

    int carry = 0;
    vector<long long> x, y;

    while(a > 0) {
      x.push_back(a % 10);
      a /= 10;
    }

    while(b > 0) {
      y.push_back(b % 10);  
      b /= 10;
    }

    int cnt = 0;
    int sz = max(x.size(), y.size());
    x.resize(sz, 0); y.resize(sz, 0);
    for(int i = 0; i < sz; i++) {
      // cout << x[i] << " " << y[i] << " " << carry << endl;
      int sum = x[i] + y[i] + carry;
      if(sum >= 10) cnt++;
      carry = sum / 10;
    }

    if(cnt > 1) cout << cnt << " carry operations." << endl;
    else if(cnt == 1) cout << cnt << " carry operation." << endl;
    else cout << "No carry operation." << endl;

  }
}