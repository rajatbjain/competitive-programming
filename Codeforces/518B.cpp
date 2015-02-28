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

int upper[26], lower[26];
int cnt1, cnt2;

inline bool uppercase(char x) {
  return ('A' <= x && x <= 'Z');
}

inline bool lowercase(char x) {
  return ('a' <= x && x <= 'z');
}

int main() {
  string s, t;
  cin >> s >> t;
  int tsz = t.size();
  int ssz = s.size();
  vector< bool > mark(ssz);
  for(int i = 0; i < tsz; i++) {
    if('a' <= t[i] && t[i] <= 'z') {
      lower[t[i] - 'a']++;
    }
    if('A' <= t[i] && t[i] <= 'Z') {
      upper[t[i] - 'A']++;
    }
  }  
  for(int i = 0; i < ssz; i++) {
    if(lowercase(s[i]) && lower[s[i] - 'a']) {
      cnt1++;
      mark[i] = 1;
      lower[s[i] - 'a']--;
    } 
    else if(uppercase(s[i]) && upper[s[i] - 'A']) {
      cnt1++;
      mark[i] = 1;
      upper[s[i] - 'A']--;
    }
  }
  for(int i = 0; i < ssz; i++) {
    if(mark[i]) continue;
    if(lowercase(s[i])) {
      if(upper[s[i] - 'a']) {
        cnt2++;
        upper[s[i] - 'a']--;
      }
    }
    else if(uppercase(s[i])) {
      if(lower[s[i] - 'A']) {
        cnt2++;
        lower[s[i] - 'A']--;
      }
    }
  }
  cout << cnt1 << " " << cnt2 << endl;
  return 0;
} 