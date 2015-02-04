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
#include <cmath>
#include <iomanip>
#include <numeric>
#include <stack>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;

long double ans = 0;

int main() {
  ios_base::sync_with_stdio(0);
  int n, m, k;
  cin >> n;
  
  vector< int > r1(n);
  for(int i = 0; i < n; i++) cin >> r1[i];
  
  cin >> m;
  vector< int > p1(m);
  for(int i = 0; i < m; i++) cin >> p1[i];
  
  cin >> k;
  vector< int > p2(k);
  for(int i = 0; i < k; i++) cin >> p2[i];
  
  int a, b;
  cin >> a >> b;

  for(int i = 0; i < k; i++) p2[i] = p2[i] * a;
  for(int i = 0; i < m; i++) p1[i] = p1[i] * b;
  
  cout.precision(9);
  
  for(int i = 0; i < (int) p1.size(); i++) {
    for(int j = 0; j < (int) p2.size(); j++) {
      long double val = (double)p1[i] / (p1[i] + p2[j]);
      ans = max(val, ans);
    }
  }

  cout << (*max_element(r1.begin(), r1.end()) * sqrt(ans)) << endl;
}