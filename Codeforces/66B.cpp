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

int n;
int a[1010];

#define d(b) cout << #b << " : " << b << endl;

int check(int x) {
  int cnt = 1;
  for(int i = x; i < n - 1; i++) {
    if(a[i] >= a[i + 1]) {
      cnt++;
    }  
    else break;
  }
  for(int i = x; i >= 1; i--) {
    if(a[i] >= a[i - 1]) {
      cnt++;
    }
    else break;
  }
  return cnt;
}

int main() {
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }
  int mx = -1;
  for(int i = 0; i < n; i++) {
    mx = max(check(i), mx);
  }
  cout << mx << endl;
}