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

int n, m;
int w[1010];
int state[1010];
int sum = 0;

void add(int x) {
  for(int i = 1; i <= n; i++) {
    if(i == x) {
      state[i] = 0;
    }
    else state[i]++;
  }
}

int Greater(int x) {
  int foo = 0;
  for(int i = 1; i <= n; i++) {
    if(state[i] < state[x]) foo += w[i];
  }
  return foo;
}

int main() {
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    cin >> w[i];
  }
  for(int i = 1; i <= m; i++) {
    int x;
    cin >> x;
    sum += Greater(x);
    add(x);
  }

  cout << sum << endl;
}