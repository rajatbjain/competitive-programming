#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  int n, a, b;
  cin >> n >> a >> b;
  vector <int> cnt(n);
  for (int i = 0; i < a; i++) {
    int foo;
    cin >> foo;
    foo--;
    cnt[foo] = 1;
  }
  for (int i = 0; i < b; i++) {
    int foo;
    cin >> foo;
    foo--;
    cnt[foo] = 2;
  }
  for(int x : cnt) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}
