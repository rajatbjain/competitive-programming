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

long long points;
long long last_move;
vector< int > a, b;

int check() {
  for(int i = 0; i < (int) a.size() and i < (int) b.size(); i++) {
    if(a[i] < b[i]) return -1;
    else if(a[i] > b[i]) return 1;
  }
  return 0;
}

int main() {
  int n;
  cin >> n;
  while(n--) {
    long long pt;
    cin >> pt;
    if(n == 0) {
      last_move = pt;
    }
    points += pt; 
    if(pt > 0) {
      a.push_back(pt);
    }
    else {
      b.push_back(-pt);
    }
  }

  if(points > 0) {
    cout << "first" << endl;
  }
  else if(points < 0){
    cout << "second" << endl;
  }
  else {
    int who = check();
    if(who == 1) {
      cout << "first" << endl;
    }
    else if(who == -1) {
      cout << "second" << endl;
    }
    else {
      cout << (last_move > 0 ? "first" : "second") << endl;
    }
  }
}