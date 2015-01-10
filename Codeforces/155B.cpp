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

pair<int, int> a[1234];

bool comp(pair<int, int> a, pair<int, int> b) {
  if(a.second < b.second) return true;
  else if(a.second > b.second) return false;
  else {
    if(a.first < b.first) return true;
    else return false;
  }
}

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    cin >> foo >> bar;
    a[i].first = foo;
    a[i].second = bar;
  }
  sort(a, a + n, comp);

  long long pts = a[n - 1].first, c = a[n - 1].second;
  for(int i = n - 2; i >= 0 && c > 0; i--) {
    pts += (long long)a[i].first;
    c += (long long)a[i].second;
    c--;
  }

  cout << pts << endl;

}