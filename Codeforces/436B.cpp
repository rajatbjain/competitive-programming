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

int n, m, k;
string a[2010];
int hindrance[2010];

void incr(char ch, int x, int y) {
  
  if(ch == 'L') {
    if(y >= x)
      y -= x;
    else return;
  }

  if(ch == 'R') {
    if(y + x < m) {
      y += x;
    }
    else return; 
  }

  if(ch == 'U' && x % 2 == 1) {
    return;
  }

  if(ch == 'D') return;

  hindrance[y]++;
}

int main() {
  scanf("%d %d %d", &n, &m, &k);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    int sz = a[i].size();
    for(int j = 0; j < sz; j++) {
      if(a[i][j] == '.') continue;
      else incr(a[i][j], i, j);
    }
  }
  for(int i = 0; i < m; i++) {
    cout << hindrance[i] << " ";
  }
  cout << endl;
}