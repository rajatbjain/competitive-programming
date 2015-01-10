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
    int n, p;
    scanf("%d %d", &n, &p);
    int e = 2 * n + p;
    for(int i = 1; i <= n && e; i++) {
      for(int j = i + 1; j <= n && e; j++) {
        cout << i << " " << j << endl;
        e--;
      }
    }
  } 
}