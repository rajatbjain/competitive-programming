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

bool seen[100010];
int a[100010];

int main() {
  int n, t;
  cin >> n >> t;
  for(int i = 1; i < n; i++) {
    cin >> a[i];
  }
  int i = 1;
  while(seen[i] == false) {
    if(i == t) {
      puts("YES");
      return 0;
    }
    seen[i] = true;
    i += a[i];
  }

  puts("NO");
  return 0;

}