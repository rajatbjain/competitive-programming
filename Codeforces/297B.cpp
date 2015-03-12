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

int bob[123456], alice[123456];
int n, m, k;
int bobcnt, alicecnt;

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n >> m >> k;
  for (int i = 0; i < n; i++) cin >> alice[i];
  for (int i = 0; i < m; i++) cin >> bob[i];
  sort(alice, alice + n);
  sort(bob, bob + m);
  reverse(alice, alice + n);
  reverse(bob, bob + m);
  int bobat = 0, aliceat = 0;
  for ( ; ; ) {
    int bobadd = 0, aliceadd = 0;
    if(bob[bobat] == alice[aliceat]) {
      int cur = bob[bobat];
      int x = bobat;
      int y = aliceat;
      while(bob[bobat] == cur && bobat < m) bobat++;
      while(alice[aliceat] == cur && aliceat < n) aliceat++;
      bobadd = bobat - x;
      aliceadd = aliceat - y;
    }
    else if (bob[bobat] > alice[aliceat]) {
      int cur = bob[bobat];
      int x = bobat;
      while(bob[bobat] == cur && bobat < m) bobat++;
      bobadd = bobat - x;
    }
    else {
      int cur = alice[aliceat];
      int x = aliceat;
      while(alice[aliceat] == cur && aliceat < n) aliceat++;
      aliceadd = aliceat - x;
    }
    if(aliceadd == 0 && bobadd == 0) break;
    alicecnt += aliceadd;
    bobcnt += bobadd;
    if(alicecnt > bobcnt) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}