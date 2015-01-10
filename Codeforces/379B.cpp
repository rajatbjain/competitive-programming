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

int x, n;

int main() {
  scanf("%d", &n);
  for(;n--;) {
    scanf("%d", &x);
    bool ok = false;
    while(x--) {
      if(ok) {
        if(n == 0) {
          printf("LR");
        }
        else {
          printf("RL");
        }
      }
      printf("P");
      ok = true;
    }
    if(n != 0) printf("R");
  }
    
  cout << "\n";
}