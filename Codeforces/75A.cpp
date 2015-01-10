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

void housekeeping() {
  ios_base::sync_with_stdio(false);
  freopen("input.txt", "r", stdin);
}

int main() {
  housekeeping();
  string a, b;
  cin >> a >> b;
  if(a.size() < b.size()) { 
    swap(a, b);
  } 
  while(b.size() != a.size()) {
    b = '0' + b;
  }
  for(int i = a.size() - 1; i >= 0; i--) {
    if(a[i] - '0' + b[i] - '0' >= 10) {
      puts("NO");
      return 0;
    } 
  }
  puts("YES");
}