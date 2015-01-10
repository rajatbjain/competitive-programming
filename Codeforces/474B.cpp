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

vector< pair<int, int> > v;

int search(int n) {
  int L = 0, R = v.size() - 1;
  while(L <= R) {
    int mid = (L + R) / 2;
    if(v[mid].first >= n && v[mid - 1].first < n) return v[mid].second;
    if(v[mid].first > n) R = mid - 1;
    if(v[mid].first < n) L = mid + 1; 

  }
}

int main() {
  // freopen("input.txt", "r", stdin);
  int n;
  scanf("%d", &n);
  int sum = 0;
  v.push_back(make_pair(0, 0));
  for(int i = 0; i < n; i++) {
    int foo;
    scanf("%d", &foo);
    sum += foo;
    v.push_back(make_pair(sum, i + 1));
  }

  int m;
  scanf("%d", &m);
  for(int i = 0; i < m; i++) {
    int foo;
    scanf("%d", &foo);
    int idx = search(foo);
    cout << idx << endl;
  }
}