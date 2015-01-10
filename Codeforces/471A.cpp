/*
  I have a dream to reach,
  and if I die trying,
  then at least I tried.
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

int hash[10];

int main() {
  int n = 6;
  for(int i = 0; i < n; i++) {
    int f;
    cin >> f;
    hash[f]++;
  }  
  
  bool l = false,  b = false, e =false;
  for(int i = 0; i < 10; i++) {
    if(hash[i] >= 4) {
      l = true;
      hash[i] -= 4;
    }
  }

  if(!l) {puts("Alien"); return 0;} 

  int cnt = 0;
  for(int i = 0; i < 10; i++) {
    if(hash[i]) cnt++;
  }
  if(cnt == 2) {
    cout << "Bear\n";
  }
  if(cnt < 2) {
    cout << "Elephant\n";
  }
}