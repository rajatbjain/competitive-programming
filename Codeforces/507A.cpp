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

int n, m;
pair< int, int > a[123];

vector< int > v;

int main() {
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a + 1, a + n + 1);

  for(int i = 1; i <= n ; i++) {
    if(m < a[i].first) break;
    else {
      v.push_back(a[i].second);
      m -= a[i].first;
    }
  }

  cout << v.size() << endl;

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  cout << endl;

}