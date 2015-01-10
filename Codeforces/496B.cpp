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

int len;
string s;
string best;

void process(string x) {
  for(int i = 0; i < len; i++) {
    string anew = x.substr(i);
    anew = anew + x.substr(0, i);
    if(anew < best) {
      best = anew;
    } 
  }
}

int main() {
  
  cin >> len >> s;
  best = s;
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < len; j++) {
      if(s[j] == '9') s[j] = '0';
      else s[j]++;
    }
    process(s);
  }
  cout << best << endl;
}