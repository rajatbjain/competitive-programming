#include <cstdio>
#include <bitset>
#include <cassert>
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
#include <list>
#pragma comment(linker, "/STACK:256000000")

#define D(x) cerr << #x << " -> " << x << '\n'

using namespace std;

int ans[777];

int main() {
  ios_base::sync_with_stdio(0);
 
  int n;
  long long m;
  cin >> n >> m;
  int a = 1, b = n;
  
  for(int i = 1; i <= n; i++) {
    if(m <= (1LL << (n - i - 1))) {
      ans[a] = i;
      a++;
    }
    else {
      ans[b] = i;
      b--;
      m -= (1LL << (n - i - 1));
    }
  }

  for (int i = 1; i <= n; i++) cout << ans[i] << " ";
  cout << endl;
  return 0;
}