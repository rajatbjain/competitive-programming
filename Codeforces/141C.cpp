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

pair< int, string > a[3010]; 

int main() {

  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i].second >> a[i].first;
  }
  sort(a, a + n);
  for(int i = 0; i < n; i++) {
    if(a[i].first > i) {
      cout << -1 << endl;
      return 0;
    }
  }

  for(int i = 0; i < n; i++) {
    a[i].first = i + 1 - a[i].first;
    for(int j = 0; j < i; j++) {
      if(a[i].first < a[j].first) {
        a[j].first++;
      }
    }
    a[i].first++;
  }

  for(int i = 0; i < n; i++) {
    cout << a[i].second << " " << a[i].first << endl;
  }
}