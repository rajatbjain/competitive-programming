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

int n1, n2, m1, m2;
int a[52][52], b[52][52];

bool range(int x, int y) {
  return (1 <= x && x <= n2 && 1 <= y && y <= m2);
}

int main() {
  cin >> n1 >> m1;
  for(int i = 1; i <= n1; i++) {
    for(int j = 1; j <= m1; j++) {
      char ch;
      cin >> ch;
      ch == '1' ? a[i][j] = 1 : a[i][j] = 0;
    }
  }
  cin >> n2 >> m2;
  for(int i = 1; i <= n2; i++) {
    for(int j = 1; j <= m2; j++) {
      char ch;
      cin >> ch;
      ch == '1' ? b[i][j] = 1 : b[i][j] = 0;
    }
  }
  pair< int, int > idx = make_pair(-1, -1);
  int ans = 0;
  for(int x = -55; x <= 55; x++) {
    for(int y = -55; y <= 55; y++) {
      int sum = 0;
      for(int i = 1; i < 51; i++) {
        for(int j = 1; j < 51; j++) {
          if(!range(i + x, y + j)) continue;
          if(a[i][j] && b[i + x][j + y]) sum++;
        }
      }
      if(sum > ans) {
        ans = sum;
        idx = make_pair(x, y);
      }
    }
  }
  cout << idx.first << " " << idx.second << endl;
  return 0;
}
