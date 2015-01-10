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

struct data {
  int index;
  long long req;
  long long has;
};

data p[5];
int a[50];

bool by_req(const data &a, const data &b) {
  return a.req > b.req;
}

bool by_index(const data &a, const data &b) {
  return a.index < b.index;
}

long long calc(long long left) {
  while(left) {
    bool broke = false;
    for(int i = 0; i < 5; i++) {
      if(left >= p[i].req) {
        p[i].has += left / p[i].req;
        left = left % p[i].req;
        // left -= p[i].req;
        broke = true;
        break;
      }
    }
    // cout << left << endl;
    if(!broke) break;
  }
  return left;
}

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }
  for(int i = 0; i < 5; i++) {
    int foo; scanf("%d", &foo);
    p[i].index = i;
    p[i].req = foo;
  }
  sort(p, p + 5, by_req);
  long long rem = 0;
  for(int i = 0; i < n; i++) {
    rem = calc(rem + a[i]);
  }
  sort(p, p + 5, by_index);

  for(int i = 0 ; i < 5; i++) {
    printf("%I64d ", p[i].has);
  }
  printf("\n%I64d\n", rem);
}