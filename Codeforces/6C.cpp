#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>  
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n+1];
  for(int i = 1; i <= n; i++) {
    scanf("%d", a+i);
  }
  int i = 1, j = n ; 
  while(i < j) {
    if(a[i] > a[j]) {
      a[i] -= a[j];
      a[j] = 0;
      j--;
      if(i == j) {
        j++; break;
      }
    }

    else if (a[j] > a[i]) {
      a[j] -= a[i];
      a[i] = 0;
      i++;
      if(i == j) {
        i--; break;
      }
    }

    else {
      if(i+1 == j || j-1 == i) {
        break;
      }
     i++; 
     j--;
    }
  }
  

  cout << i << " " << n - i << endl;
}