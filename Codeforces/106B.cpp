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

struct laptop {
  int h;
  int r;
  int s;
  int c;
  int id;
}a[110];

bool cmp(laptop a, laptop b) {
  if(a.c < b.c) return true;
  else return false;
}

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d %d %d %d", &a[i].s, &a[i].r, &a[i].h, &a[i].c);
    a[i].id = i + 1;
  }
  sort(a, a + n, cmp);
  
  for(int i = 0; i < n; i++) {
    bool ok = true;
    for(int j = 0; j < n; j++) {
      if(i == j) continue;
      if(a[i].s < a[j].s && a[i].h < a[j].h && a[i].r < a[j].r) {
        ok = false;
        break;
      }  
    }
    if(ok) {
      cout << a[i].id << endl;
      return 0;
    }
  }
}