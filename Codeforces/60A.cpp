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

vector < bool > a(1005, 0);
int n, m;

void fillleft(int i) {
  while(i >= 1) {
    a[i] = 1;
    i--;
  }
}

void fillright(int i) {
  while(i <= n) {
    a[i] = 1;
    i++;
  } 
}

int main() {
  // freopen("input.txt", "r", stdin);
  bool plus;  
  cin >> n >> m;
  string aa, b, c, dir;
  int num;
  for(int i = 0; i < m; i++) {
    cin >> aa >> b >> dir >> c >> num;
    if(dir == "right") {
      fillleft(num);
      a[num] = 1;
    }   
    else {
      fillright(num);
    } 
  }
  int j = 0;
  for(int i = 1; i <= n; i++) {
    if(a[i] == 0) {
      j++;
    }
  }

  if(j == 0) printf("-1\n");
  else printf("%d\n", j);
}