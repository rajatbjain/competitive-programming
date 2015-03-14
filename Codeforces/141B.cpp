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

double l, r;

void PrintAndDie(int x) {
  cout << x << endl;
  exit(0);
}

bool range(int x) {
  return (l < x && x < r);
}

int get(int meet) {
  int at = 2;
  for(int i = 1; i <= meet; i++) {
    if(i % 2) at += 2;
    else at += 1;
  }
  return at;
}

int main() {
  ios_base::sync_with_stdio(false);
  int a, x, y;
  cin >> a >> x >> y;
  if(y <= 0) PrintAndDie(-1);
  if(y <= 2 * a) {
    r = (double)a / 2;
    l = -r;
    if(!range(x)) PrintAndDie(-1);
    if(y == a || y == 2 * a) PrintAndDie(-1);
    if(0 < y && y < a) PrintAndDie(1);
    if(a < y && y < 2 * a) PrintAndDie(2);
  }
  else {
    y -= 2 * a;
    if(y % a == 0) PrintAndDie(-1);
    int id = y / a + 1;
    int at = get(id);
    if(id % 2) {
      if(x % a == 0) PrintAndDie(-1);
      if(-a < x && x < 0) PrintAndDie(at - 1);
      if(0 < x && x < a) PrintAndDie(at);
    }
    else {
      r = (double)a / 2;
      l = -r;
      if(!range(x)) PrintAndDie(-1);
      PrintAndDie(at);
    }
  }
  PrintAndDie(-1);
  return 0;
}
