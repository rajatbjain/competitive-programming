#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>  
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>
#define d(c) cout << #c << " " << c << endl;
using namespace std;

int main() {
  
  int n, m; 
  int l, r;
  scanf("%d %d" ,&n, &m);
  int mid;
  if((m&1) == 0) {
    mid = m >> 1;
    l = mid;
    r = mid + 1;
  }
  else {
    mid = m >> 1;
    mid++;
    l = r = mid;
  }
  int a[m+2]; 
  int k = 0;
  while(l > 0 && r <= m) {
    a[++k] = l;
    if( l != r) {
      a[++k] = r;
    }
    l--;
    r++;
  }

  for(int i = 0, j = 1; i < n ; i++, j++) {
    if(j > m) j = 1;
    cout << a[j] << endl;
  }
}