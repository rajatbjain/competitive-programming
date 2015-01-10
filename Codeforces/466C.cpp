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
#include <ctime>

using namespace std;

struct input{input& operator>>(int& x){scanf("%d", &x);return *this;}input& operator>>(long long& x){scanf("%I64d", &x);return *this;}input& operator>> (char& x){scanf(" %c", &x);return *this;}}in;

const int N = 500010;

long long a[N];

int main() {
  int n;
  in >> n;
  for(int i = 0; i < n; i++) {
    int foo;
    in >> foo;
    a[i + 1] = a[i] + foo;
  }

  if(a[n] % 3) {
    cout << 0 << endl;
    return 0;
  }

  long long x = a[n] / 3;
  long long y = 2 * a[n] / 3;
  long long ans = 0, cnt = 0;

  for(int i = 1; i < n; i++) {
    if(a[i] == y) {
      ans += cnt;
    }
    if(a[i] == x) {
      cnt++;
    }
  }
  cout << ans << endl;
}