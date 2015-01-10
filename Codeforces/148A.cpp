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

int k, l, m, n, d;

int main() {
  scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
  int bullied = 0;
  for(int i = 1; i <= d; i++) {
    if(!(i % k)) ++bullied;
    else if(!(i % l)) ++bullied;
    else if(!(i % m)) ++bullied;
    else if(!(i % n)) ++bullied;
  }

  cout << bullied << endl;
}