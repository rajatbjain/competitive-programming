/*
  I have a dream to reach,
  and if I die trying,
  at least I've tried.
*/
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

int main() {
  int tt;
  scanf("%d", &tt);
  while(tt--) {
    int angle;
    scanf("%d", &angle);
    angle -= 180;
    if(360 % angle == 0) puts("YES");
    else puts("NO");
  }
  return 0;
}