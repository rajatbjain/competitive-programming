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

int main() {
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  vector< int > a(n);
  int idx = 0;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n - 1; i++) {
    if(a[i] > a[i + 1]) idx = i + 1;
  }
  cout << idx << endl;
}
