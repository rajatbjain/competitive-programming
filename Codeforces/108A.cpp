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

bool palin(int x, int y) {
  int a = x % 10; 
  x /= 10;
  int b = y % 10;
  y /= 10;

  if(a == y && x == b) return true;
  else return false;
}

bool a[100000] = {0};

int main() {
  int hh, mm;
  scanf("%d:%d", &hh, &mm);
  
  for(int i = 0; i < 24; i++) {
    for(int j = 0; j < 60; j++) {
      if(palin(i, j)) {
        int num = i * 100 + j;
        a[num] = 1;
      } 
    }
  }

  int t = hh * 100 + mm;
  bool f = false;
  for(int i = t+1; i<=2359 ; i++) {
    if(a[i]) {
      t = i;
      f = true;
      break;
    }
  }
  if(f == false) {
    cout << "00:00\n";
    return 0;
  }
  mm = t % 100;
  t /= 100;
  hh = t;
  if(hh < 10) cout << "0" << hh << ":";
  else cout << hh << ":";
  if(mm < 10) cout << "0" << mm << endl;
  else cout << mm << endl;
}