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

int n, m, s, f;
int t[123456], l[123456], r[123456];

inline bool watching(int l, int r, int x) {
  if(l <= x && x <= r) return true;
  else return false;
}

int main() {
  scanf("%d %d %d %d", &n, &m, &s, &f);
  for(int i = 1; i <= m; i++)
    scanf("%d %d %d", t + i, l + i, r + i);
  for(int i = 1, j = 1; ; i++) {
    if(s == f) break;
    j = min(m, j);
//    cout << endl << i << " " << t[j] << " " << s << endl;
    if(i == t[j]) {
      if(s < f && (!watching(l[j], r[j], s + 1) && !watching(l[j], r[j], s))) {
        s++;
        putchar('R');    
      }  
      else if(s > f && (!watching(l[j], r[j], s - 1) && !watching(l[j], r[j], s))) {
        s--;
        putchar('L');
      }
      else {
        putchar('X');
      }
      j++;
    } else {
      if(s < f) {
        putchar('R');
        s++;
      }
      else {
        putchar('L');
        s--;
      }
    }
  }
  putchar('\n');
  return 0;
}