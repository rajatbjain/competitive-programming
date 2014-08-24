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
#include <ctime>
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
  int n, m;
  cin >> n >> m;
  int ans = n;
  int i = 0;
  for( ; ans > 0; ) {
    --ans;
    ++i;
    if(!(i % m)) ++ans;
  }

  cout << i << endl;
}