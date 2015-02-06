/*
  I always did something I was little not ready to do.
  I think that's how you grow. When there's that moment 
  of 'Wow, I am not really sure I can do this...' and
  push through those moments, that's when you have a
  BREAKTHROUGH.
*/

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

int main() {
  ios_base::sync_with_stdio(0);
   int d;
   cin >> d;
   int n;
   cin >> n;
   if(n == 1) {
    cout << 0 << endl;
    return 0;
   }
   int ans = 0;
   for(int i = 0; i < n - 1; i++) {
    int days;
    cin >> days;
    ans += d - days;
   }
   cout << ans << endl;
}