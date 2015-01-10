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

struct input{input& operator>>(int& x){scanf("%d", &x);return *this;}input& operator>>(long long& x){scanf("%I64d", &x);return *this;}input& operator>> (char& x){scanf(" %c", &x);return *this;}}in;

int a[100010];

int main() {
  int n, k;
  in >> n >> k;
  for(int i = 0; i < n; i++) {
    int foo;
    in >> foo;
    a[i % k + 1] += foo;
  }

  cout << min_element(a + 1, a + k + 1) - a << endl;

}