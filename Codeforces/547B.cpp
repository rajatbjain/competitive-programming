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

int a[200010];
int l[200010], r[200010];
int n;
int ans[200010];

int main() {
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    scanf("%d", a + i);
  }
  stack <int> s;
  for(int i = 1; i <= n; i++) {
    while(s.empty() == false && a[s.top()] >= a[i]) s.pop();
    if(!s.empty()) l[i] = s.top();
    else l[i] = 0;
    s.push(i);
  }
  while(!s.empty()) s.pop();
  for (int i = n; i >= 1; i--) {
    while(s.empty() == false && a[s.top()] >= a[i]) s.pop();
    if(!s.empty()) r[i] = s.top();
    else r[i] = n + 1;
    s.push(i);    
  }
  for(int i = 1; i <= n; i++) {
    int c = r[i] - l[i] - 1;
    ans[c] = max(ans[c], a[i]);
  }
  for(int i = n - 1; i > 0; i--) {
    ans[i] = max(ans[i], ans[i + 1]);
  }
  for(int i = 1; i <= n; i++) {
    printf("%d ", ans[i]);
  }
  printf("\n");
  return 0;
}