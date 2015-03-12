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

pair< int, int > calc(string x) {
  int p = 0, v = 0;
  int sz = x.size();
  for(int i = 1; i < sz; i++) {
    if(x[i] == x[i - 1]) p++;
  }
  for(int i = 1; i < sz; i++) {
    if(x[i] != x[i - 1]) v++;
  }
  return make_pair(p, v);
}


void petya(string &s, char &ch, int &r, int &b) {
  if(ch == 'r') {
    if(r) {
      s += "r";
      r--;
    }
    else {
      s += "b";
      b--;
    }
  }
  else if(ch == 'b') {
    if(b) {
      s += "b";
      b--;
    }
    else {
      s += "r";
      r--;
    }
  }
}

void vasya(string &s, char &ch, int &r, int &b) {
  if(ch == 'r') {
    if(b) {
      s += "b";
      b--;
    }
    else {
      s += "r";
      r--;
    }
  }
  else if(ch == 'b') {
    if(r) {
      s += 'r';
      r--;
    }
    else {
      s += 'b';
      b--;
    }
  }
}

string make_string1(int r, int b) {
  string s;
  for(int i = 0; r || b; i++) {
    if(i % 2 == 0) { // petya chance
      if(i == 0) {
        s += 'r';
        r--;
      }
      else {
        char ch  = s.back();
        petya(s, ch, r, b);
      }
    }
    else { // vasya chance
      char ch = s.back();
      vasya(s, ch, r, b);
    }
  }
  return s;
}

string make_string2(int r, int b) {
  string s;
  for(int i = 0; r || b; i++) {
    if(i % 2 == 0) { // petya chance
      if(i == 0) {
        s += 'b';
        b--;
      }
      else {
        char ch  = s.back();
        petya(s, ch, r, b);
      }
    }
    else { // vasya chance
      char ch = s.back();
      vasya(s, ch, r, b);
    }
  }
  return s;
}

int main() {
  ios_base::sync_with_stdio(false);
  int x, y;
  cin >> x >> y;
  pair< int, int > ans1 = calc(make_string1(x, y));
  pair< int, int > ans2 = calc(make_string2(x, y));
  if(ans1.first > ans2.first) {
    cout << ans1.first << " " << ans1.second << endl;
  }
  else if(ans2.first > ans2.second){
    cout << ans2.first << " " << ans2.second << endl;
  }
  else {
    if(ans1.second < ans2.second) {
      cout << ans1.first << " " << ans1.second << endl;
    }
    else {
      cout << ans2.first << " " << ans2.second << endl;
    }
  }
  return 0;
}
