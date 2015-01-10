/*
  I have a dream to reach,
  and if I die trying,
  at least I've tried.
*/
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

#define d(b) cout << #b << " " << b << endl;
int n;
int a[100010];
bool saw[100010];

int main() {
  
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 1; i < n; i++) {
    if(a[i - 1] > a[i]) {
      saw[i - 1] = saw[i] = true;
    }
  }

  int ll = -1, ul = -1, i;
  for(i = 0; i < n; i++) {
    if(saw[i] == true) {
      ll = i; 
      break;
    }
  }
  if(ll == -1) {
    cout << "yes" << endl;
    cout << "1 1" << endl;
    return 0;
  }
  for(; i < n; i++) {
    if(saw[i] == false) {
      ul = i;
       break;
    }
  }
  
  ul = i;

  // cout << "limits " << ll << " " << ul << endl;
  reverse(a + ll, a + ul);

  // for(int i = 0; i < n; i++) {
  //   cout << a[i] << " " ;
  // }
  // cout << endl;

  for(int i = 0; i < n; i++) {
    if(a[i - 1] > a[i]) {
      puts("no");
      return 0;
    }
  }

  cout << "yes" << endl;
  cout << (ll == -1 ? 1 : ll + 1) << " " << (ul == -1 ? 1 : ul) << endl;
}