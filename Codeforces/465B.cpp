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

int a[1010];
int b[1010];
int unread = 0;
int op = 0;

int main() {
  int n;
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    scanf("%d", a + i);
    if(a[i] == 1) {
      unread++;
    }
  }

  for(int i = 1; i <= n; i++) {
    if(a[i] == 1) {
      op++;
      unread--;
      i++;
      while(i <= n && a[i] == 1) {
        unread--;
        op++;
        i++;
      }
      if(unread == 0) break;
      op++;
    }
    if(unread == 0) break;
  }
  cout << op << endl;
}
