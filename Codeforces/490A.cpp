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
#include <memory.h>

using namespace std;

vector< int > v[4];
#define d(b) cout << #b << " " << b << endl;
int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    v[foo].push_back(i + 1);
  }
  int c = min (v[1].size(), min(v[2].size(), v[3].size()));
  cout << c << endl;
  for(int i = 0; i < c; i++) {
    cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
  }
}