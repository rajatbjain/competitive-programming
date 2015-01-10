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
  int n;
  scanf("%d", &n);
  int a[n];
  int mx, mm, mxi, mmi;
  for(int i = 0; i < n; i++) {
    if(i == 0) {
      scanf("%d", a + i);
      mx = a[i], mm = a[i], mxi = i + 1, mmi = i + 1; 
    }
    else {
      scanf("%d", a + i);
      if(a[i] > mx) {
        mx = a[i], mxi = i + 1;
      }
        
      if(mm >= a[i]) {
        mm = a[i], mmi = i + 1;
      }
    }
  }

  if(mmi < mxi) {
    printf("%d\n", mxi - 1 + n - mmi - 1);
  }
  else {
    printf("%d\n", mxi - 1 + n - mmi);
  }

}