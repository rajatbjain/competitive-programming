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

vector< int > digits;

void init(int a) {
  while(a) {
    digits.push_back(a % 10);
    a /= 10;
  } 
  sort(digits.begin(), digits.end());
}

bool check(int a) {
  while(a) {
    int u = a % 10;
    if(binary_search(digits.begin(), digits.end(), u)) {
      return true;
    }
    a /= 10;
  }
  return false;
}

int main() {
  int x, cnt = 0;
  cin >> x;
  init(x);
  for(int i = 1; i * i <= x; i++) {
    if(i * i == x) {
      cnt += check(i);
    }
    else if(x % i == 0) {
      cnt += check(i) + check(x / i);
    }
  }
  cout << cnt << endl;
}