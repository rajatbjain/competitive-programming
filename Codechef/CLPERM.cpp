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

inline long long compute(long long x) {
  long long other, another;
  if(x & 1) {
    other = (x + 1) >> 1;
    another = x;
  } else {
    other = x >> 1;
    another = (x + 1);
  }

  return other * 1LL * another;
}

inline void print(long long x) {
  puts(x % 2 == 1 ? "Chef" : "Mom");
}

void solve() {

  long long n, k;
  cin >> n >> k;

  long long overall = compute(n);
  long long ksum = 0;

  vector< int > elements;

  while(k--) {
    long long foo;
    cin >> foo;
    elements.push_back(foo);
  }

  sort(elements.begin(), elements.end());

  for(int i = 0; i < (int) elements.size(); i++) {
    long long current = compute(elements[i] - 1);
    current -= ksum;
    if(current < elements[i]) {
      print(elements[i]);
      return;
    } 
    else {
      ksum += elements[i];
    }
  }

  long long ans = overall - ksum + 1;
  print(ans);

}

int main() {
  int tt;
  cin >> tt;
  while(tt--) solve();
}