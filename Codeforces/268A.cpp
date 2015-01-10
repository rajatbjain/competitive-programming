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
  vector< pair<int, int> > color;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    cin >> foo >> bar;
    color.push_back(make_pair(foo, bar));
  }
  int c = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j ) continue;
      else if(color[i].first == color[j].second) c++;
    }
  }
  cout << c << endl;
}