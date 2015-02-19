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

int main() {
  ios_base::sync_with_stdio(0);
  int a, b, c;
  cin >> a >> b >> c;
  a = abs(a);
  b = abs(b);
  if(c >= a + b && (c - a - b) % 2 == 0) {
    cout << "Yes\n";
  } 
  else {
    cout << "No\n";
  }
  return 0;
}