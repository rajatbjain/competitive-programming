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

map<int, int> hash;

int main() {
  int n;
  cin >> n; 
  for(int i = 0 ; i < n; i++) {
     int foo;
     cin >> foo;
     if(foo == 0) continue;
     hash[foo]++;
  }
  map<int, int> :: const_iterator i;
  int cnt = 0;
  for(i = hash.begin(); i != hash.end(); i++) {
    if(i -> second > 2) {
      puts("-1");
      return 0;
    }
    if(i -> second == 2) cnt++;
  }
  cout << cnt << endl;
}