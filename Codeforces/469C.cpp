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
#define OFF ios_base::sync_with_stdio(false)
 
using namespace std;

int main() {
  OFF;
  int n;
  cin >> n;
  if(n <= 3) {
    puts("NO");
    return 0;
  }

  puts("YES");

  if(n & 1) {
    puts("5 * 4 = 20");
    puts("3 + 2 = 5");
    puts("20 + 5 = 25");
    puts("25 - 1 = 24");
    for(int i = n; i >= 7; i -= 2) {
      printf("%d - %d = 1\n", i, i - 1);
      puts("1 * 24 = 24");
    }
    return 0;
  }
  else {
    puts("1 * 2 = 2");
    puts("2 * 3 = 6");
    puts("6 * 4 = 24");
    for(int i = n; i >= 6; i -= 2) {
      printf("%d - %d = 1\n", i, i - 1);
      puts("1 * 24 = 24");
    }
    return 0;
  }
}