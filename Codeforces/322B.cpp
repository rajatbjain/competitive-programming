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
void bruteForce(int r, int b, int g, const int& maxr, const int& maxb, const int& maxg, int level) {
  Reached = max(Reached, level);
  if(r + 3 <= maxr) bruteForce(r + 3, b, g, maxr, maxb, maxg, level + 1);
  if(b + 3 <= maxb) bruteForce(r, b + 3, g, maxr, maxb, maxg, level + 1);
  if(g + 3 <= maxg) bruteForce(r, b, g + 3, maxr, maxb, maxg, level + 1);
  if(r + 1 <= maxr and g + 1 <= maxg and b + 1 <= maxb) bruteForce(r + 1, b +1, g + 1, maxr, maxb, maxg, level + 1);
}

int diffStrategy(int x, int y, int z) {
  int b[3] = {x, y, z};
  sort(b, b + 3);
  int cur = b[0] / 3 + b[1] / 3 + b[2] / 3;
  bruteForce(0, 0, 0, b[0] % 3, b[1] % 3, b[2] % 3, 0);
  cur += Reached;  
  Reached = 0;
  return cur;
}

int compute(int x, int y, int z) {
  int best = 0;
  int a[3] = {x, y, z};
  sort(a, a + 3);
  for(int i = 0; i <= 3; i++) {
    int b[3] = {a[0], a[1], a[2]};
    if(b[0] - i <= 0 || b[1] - i <= 0 || b[2] - i <= 0) {
      best = max( diffStrategy(b[0], b[1], b[2]), best);
      continue;
    }
    for(int id = 0; id < 3; id++ ) b[id] -= i;
    int curr = b[0] / 3 + b[1] / 3 + b[2] / 3 + i;
    b[0] = b[0] % 3;
    b[1] = b[1] % 3;
    b[2] = b[2] % 3;
    bruteForce(0, 0, 0, b[0], b[1], b[2], 0);  
    curr += Reached;
    Reached = 0;
    best = max(best, curr);
  }
  return best;
}

bool checker(int a, int b, int c) {
  bruteForce(0, 0, 0, a, b, c, 0);
  int with_brute_force = Reached;
  Reached = 0;
  int with_compute_fn = compute(a, b, c);
  return with_brute_force == with_compute_fn;  
}

int main() {
  // for(int i = 0; i <= 10; i++) {
  //   for(int j = 0; j <= 10; j++) {
  //     for(int k = 0; k <= 10; k++) {
  //       cout << "Parameters " << i << " " << j << " " << k << " " << (checker(i, j, k) ? "OK\n" : "Wrong Answer\n");        
  //     }
  //   }
  // }  
  // return 0;
  int r, b, g;
  scanf("%d %d %d", &r, &b, &g);
  printf("%d\n", compute(r, b, g));
  return 0;
}