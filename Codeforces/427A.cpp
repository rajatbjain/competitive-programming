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

int police = 0, crimes = 0;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    if(foo == -1 && police) {
      police--;
    }
    else if(foo == -1 && !police) crimes++;
    else police += foo;
  }

  cout << crimes << endl;
}