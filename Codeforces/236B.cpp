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

const long long md = 1 << 30;

int factor[1000010];

void calc()
{
   for(int i = 1; i <= 1000010; i++) {
      for(int j = i; j <= 1000010; j+=i) {
         factor[j]++;
      }
   }
}

int main() {
  calc();
  int a, b, c;
  long long res = 0;
  scanf("%d %d %d", &a, &b, &c);
  for(int i = 1; i <= a; i++) {
    for(int j = 1; j <= b; j++) {
      for(int k = 1; k <= c; k++) {
        res = res + factor[i * j * k] % md;  
      }
    }
  }
  printf("%I64d\n", res);
}