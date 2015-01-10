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

vector< pair < int, int > > point;

int main() {
  int x, y;
  cin >> x >> y;
  for(int i = x, j = 0; i >= 0 && j <= y; i--, j++) {
    point.push_back(make_pair(i, j));
  }
  cout << point.size() << endl;
  for(int i = 0; i < (int) point.size(); i++) {
    cout << point[i].first << " " << point[i].second << endl;
  }
}