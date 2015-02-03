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
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;

char a[123][123];

int main() {
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  memset(a, '#', sizeof a);

  for(int i = 1, j = 1; i <= n; i++) {
    if(i % 2 == 0) {
      if(j % 2 == 1) {
        for(int id = 1; id < m; id++) {
          a[i][id] = '.';
        }
      }
      else {
        for(int id = 2; id <= m; id++) {
          a[i][id] = '.';
        }
      }
      j++;
    }
  }

  for(int i = 1; i <= n; i++) {
    for(int j =1 ; j <= m; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }
    
}