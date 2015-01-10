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

pair< int, int > b[5010];
int n;
int last = -1;

int main() {
  cin >> n;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    cin >> foo >> bar;
    b[i].first = foo;
    b[i].second = bar;
  }
  sort(b, b + n);
  last = b[0].second;
  for(int i = 1; i < n; i++) {
    if(last <= b[i].second) last = b[i].second;
    else last = b[i].first;
  }
  cout << last << endl;
}