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

int g[6][6];
int total = 0;
int best = 0;
int a[] = {1, 2, 3, 4, 5};


int r(int i, int j) {
  return g[a[i - 1]][a[j - 1]] + g[a[j - 1]][a[i - 1]];
}

int main() {
  for(int i = 1; i < 6; i++) {
    for(int j = 1; j < 6; j++) {
      cin >> g[i][j];
    }
  }


  do {
    total = r(1, 2) + r(3, 4) + r(2, 3) + r(4, 5) + r(3, 4) + r(4, 5);
    best = max(total, best);
  } while(next_permutation(a, a + 5));
    
  cout << best << endl;

}