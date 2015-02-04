#include <cstdio>
#include <bitset>
#include <cassert>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>
#include <list>

using namespace std;

bool g[110][110];
bool tmp[110][110];

int Has(int index) {
  int cnt = 0;
  for(int i = 1; i <= 100; i++) {
    if(g[index][i]) cnt++; 
  }
  return cnt;
}

void Remove(int index) {
  for(int i = 0; i <= 100; i++) {
    tmp[i][index] = tmp[index][i] = false;
  }
}

void Copy() {
  for(int i = 0; i <= 100; i++) {
    for(int j = 0; j <= 100; j++) {
      g[i][j] = tmp[i][j];
    }
  }
}

int main(int argc, char* argv[]) {
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    g[x][y] = g[y][x] = 1;
    tmp[x][y] = tmp[y][x] = 1;
  }
  int total = 0;
  while(true) {
    bool removed = false;
    for(int i = 1; i <= n; i++) {
      if(Has(i) == 1) {
        Remove(i);
        removed = true;
      }
    }
    if(!removed) {
      break;
    } else {
      total++;
      Copy();
    }
  }
  cout << total << endl;
}