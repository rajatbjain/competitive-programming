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

int upperLimit;
vector< int > weights;

void backtrack(int a, int b, int lastUsed, int at, vector< int > order) {
  if (at == upperLimit) {
    cout << "YES\n";
    for (int x : order) {
      cout << x << " ";
    }
    cout << endl;
    exit(0);
  }
  else {
    bool AHasChance = at % 2 == 0;
    for (int w : weights) {
      if (w != lastUsed) {
        if (AHasChance) {
          if (a + w > b) {
            vector< int > foo = order;
            foo.push_back(w);
            backtrack(a + w, b, w, at + 1, foo);
          }
        }
        else {
          if (b + w > a) {
            vector< int > foo = order;
            foo.push_back(w);
            backtrack(a, b + w, w, at + 1, foo);
          }
        }
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  for (int i = 1; i <= 10; i++) {
    char ch;
    cin >> ch;
    if (ch == '1') weights.push_back(i);
  }
  cin >> upperLimit;
  vector< int > o;
  backtrack(0, 0, -1, 0, o);
  cout << "NO\n";
  return 0;
}