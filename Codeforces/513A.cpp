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
#pragma comment(linker, "/STACK:256000000")

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int n1, n2, k1, k2;
  cin >> n1 >> n2 >> k1 >> k2;
  int i = 0;
  while(true) {
    if(i % 2 == 0) {
      if(n1 >= 1) n1 -= 1;
      else {
        cout << "Second\n";
        return 0;
      }
    }
    else {
      if(n2 >= 1) n2 -= 1;
      else {
        cout << "First\n";
        return 0;
      }
    }
    i++;
  }
}