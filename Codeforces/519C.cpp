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

int Reached = 0;

void solve(int x, int y, int level) {
  if(x < 0 || y < 0) return;
  Reached = max(Reached, level);
  solve(x - 2, y - 1, level + 1);
  solve(x - 1, y - 2, level + 1);
}

int SolveThisWay(int n, int m) {
  long long ans = 0;
  while(n > 10 && m > 10) {
    if(n >= m) {
      n -= 2;
      m --;
    }
    else {
      m -= 2;
      n --;
    }
    ans++;
  }
  Reached = 0;
  solve(n, m, 0);
  int tmp = Reached;
  Reached = 0;
  return ans + tmp;
}

int main() {
  int n, m;
  cin >> n >> m;
  if(n == 0 || m == 0) {
    cout << 0 << endl;
    return 0;
  }
  cout << SolveThisWay(n, m) << endl;
  return 0;
}