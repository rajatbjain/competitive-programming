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
  int n;
  cin >> n;
  for(int i = 1; ; i++) {
    int curr = i * (i + 1) / 2;
    if(n < curr) {
      cout << i - 1 << endl;
      return 0;
    }
    else n -= curr;
  } 
}