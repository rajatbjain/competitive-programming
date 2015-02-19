#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>

using namespace std;

int degree[1234567];

int main() {
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    int foo, bar;
    cin >> foo >> bar;
    degree[foo]++;
    degree[bar]++;
  }
  int countTwo = 0, countOther = 0, countOne = 0;
  for(int i = 1; i <= n; i++) {
    if(degree[i] == 1) countOne++;
    if(degree[i] == 2) countTwo++;
    if(degree[i] > 2) countOther++;
  }
  if(countOther == 1 && countOne == n - 1 && countTwo == 0) {
    cout << "star topology\n";
    return 0;
  }
  else if(countOther == 0 && countOne == 0 && countTwo == n) {
    cout << "ring topology\n";
  }
  else if(countOther == 0 && countTwo == n - 2 && countOne == 2) {
    cout << "bus topology\n";
  }
  else {
    cout << "unknown topology\n";
  }
}