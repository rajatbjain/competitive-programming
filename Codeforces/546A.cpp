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
  ios_base::sync_with_stdio(false);
  long long cur = 0;
  long long n, k, w;
  cin >> k >> n >> w;
  for (int i = 1; i <= w; i++) {
    cur += k * i;
  } 
  long long req = cur - n;
  req = max(0LL, req);
  cout << req << endl;
  return 0;
}