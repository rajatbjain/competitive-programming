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

int hash[123456];

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    int foo, bar;
    scanf("%d %d", &foo, &bar);
    int tt = (foo * 100) + (bar);
    hash[tt]++;
  }

  int bestSoFar = 1;
  for(int i = 0; i < 2500; i++) {
    if(hash[i] > bestSoFar) bestSoFar = hash[i];
  }

  printf("%d\n", bestSoFar);
}