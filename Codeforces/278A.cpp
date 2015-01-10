/*
  I have a dream to reach,
  and if I die trying,
  at least I've tried.
*/
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
  int a[n + 1], total = 0;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    total += a[i];
  }
  int s, t;
  cin >> s >> t;
  if(s > t) swap(s, t);
  int reach = 0;
  for(int i = s; i < t; i++) {
    reach += a[i];
  }
  cout << min(reach, total - reach) << endl;
}