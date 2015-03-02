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

int n;
int a[123456];
int b[123456];
int c[123456];

int main() {
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }   
  for(int i = 0; i < n - 1; i++) {
    scanf("%d", b + i);
  }
  for(int i = 0; i < n - 2; i++) {
    scanf("%d", c + i);
  }
  int ff = -1, ss = -1;
  sort(a, a + n);
  sort(b, b + n - 1);
  sort(c, c + n - 2);
  for(int i = 0; i < n - 1; i++) {
    if(a[i] != b[i]) {
      ff = a[i];
      break;
    }
  }
  if(ff == -1) ff = a[n - 1];
  for(int i = 0; i < n - 2; i++) {
    if(b[i] != c[i]) {
      ss = b[i];
      break;
    }
  }
  if(ss == -1) ss = b[n - 2];
  cout << ff << "\n" << ss << "\n";
  return 0;
}