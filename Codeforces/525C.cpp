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
#include <cassert>

using namespace std;

const int N = 1000100;

int n;
long long a[N];
long long ans = 0;

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x]++;
  }
  for(int i = N - 1; i >= 2; i--) {
    if(a[i] & 1) {
      a[i]--;
      if(a[i - 1] > 0) a[i - 1]++;
    }
  }
  for(int i = 0; i < N; i++) assert(a[i] % 2 == 0);
  long long ans = 0;
  int onNext = -1;
  for(int i = N - 1; i >= 1; i--) {
    if(a[i] == 0) {
      continue;
    }
    if(onNext != -1) {
      ans += 1LL * onNext * i;
      onNext = -1;
      a[i] -= 2;
    }
    int t = a[i] / 4;
    a[i] %= 4;
    ans += 1LL * t * i * i;
    if(a[i] != 0) onNext = i;  
    else onNext = -1;
  }
  cout << ans << endl;
  return 0;
}