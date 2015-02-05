/*
  I always did something I was little not ready to do.
  I think that's how you grow. When there's that moment 
  of 'Wow, I am not really sure I can do this...' and
  push through those moments, that's when you have a
  BREAKTHROUGH.
*/

#pragma comment(linker, "/STACK:256000000")
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

using namespace std;

int a[12];
int paint;

int main() {
  ios_base::sync_with_stdio(0);  
  cin >> paint;
  for(int i = 1; i <= 9; i++) {
    cin >> a[i];
  }
  int best = *min_element(a + 1, a + 10);
  int cnt = paint / best;
  if(cnt == 0) {
    cout << -1 << endl;
    return 0;
  }

  paint -= cnt * best;

  while(cnt--) {
    for(int i = 9; i >= 1; i--) {
      if(paint >= a[i] - best) {
        cout << i;
        paint = paint - a[i] + best;
        break;
      }
    }  
  }

  cout << endl;
}
  
