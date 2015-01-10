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
  vector< pair <int, string> > v;
  v.push_back(make_pair(0, "chest"));
  v.push_back(make_pair(0, "biceps"));
  v.push_back(make_pair(0, "back"));

  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    v[i % 3].first += foo;
  }

  sort(v.begin(), v.end());

  cout << v[2].second << endl;

}