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

using namespace std;

const int inf = 100005;

int main() {
  // freopen("input.txt", "r", stdin);
  int N, M;  
  scanf("%d %d", &N ,&M);
  int a[inf], b[inf];
  int am[10000000], bm[10000000];
  for(int i = 0 ; i < N ; i++ ){
    int x , y;
    scanf("%d %d", &x, &y);
    a[y]++;
    am[x*1010+y]++;
  }

  for(int i = 0; i < M; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    b[y]++;
    bm[x*1010+y]++;
  }
  int u = 0, v = 0;
  for(int i = 0; i < M+5; i++) {
    if(a[i] != 0 && b[i] !=0) {
      u += min(a[i], b[i]);
    }
  }

  for(int i = 0 ; i<=1011000; i++) {
    if(am[i] != 0 && bm[i] != 0) {
      v += min(am[i], bm[i]);
    }
  }

  cout << u << " " << v << endl;
  
}