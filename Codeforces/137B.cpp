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

set<int> rm;

int main() {
  int n;
  cin >> n; 
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    if(foo > n) continue;
    
    rm.insert(foo);
  }
  cout << (n - (int)rm.size()) << endl;
}