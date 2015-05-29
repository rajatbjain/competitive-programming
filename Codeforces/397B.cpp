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
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    long long n, l, r;
    cin >> n >> l >> r;
    if (n < l) {
      cout << "No\n";
      continue;
    } 
    int need = n % l;
    if (need <= (r - l) * (n / l)) {
      cout << "Yes\n";
    }
    else {
      cout << "No\n";
    }
  }  
  return 0;
}