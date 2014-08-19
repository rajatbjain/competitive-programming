/*
 ID: rajat.r1
 LANG: C++
 TASK: beads
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
#include <ctime>
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
#define INPUT(file) freopen(file, "r", stdin)
#define OUTPUT(file) freopen(file, "w", stdout)

int main() {
  INPUT("beads.in");
  OUTPUT("beads.out");
  int n, beadsMax = 0;
  string s;
  cin >> n >> s;

  for(int i = 0; i < n; i++) {
    char a = s[i - 1 < 0 ? n - 1 : i - 1];
    char b = s[i];
    bool repa = a == 'w' ? true : false;
    bool repb = b == 'w' ? true: false;

    int j, pos, beads = 0;
    j = (i - 1 < 0 ? (n - 1) : (i - 1));
    pos = i;
    while(s[j] == 'w' || s[j] == a) {
      if(repa && s[j - 1] != 'w') {
        repa = false;
        a = s[j - 1];
      }
      ++beads;
      --j;
      if(j < 0) j = n - 1;
      if(j == pos) break;
    }
    j = i;
    while(s[j] == 'w' || s[j] == b) {
      if(repb && s[j + 1] != 'w') {
        repb = false;
        b = s[j];
      }
      ++beads;
      ++j;
      if(j >= n) j = 0;
      if(j == pos) break;
    }
    if(beadsMax < beads) {
      beadsMax = beads;
    }
  }

  cout << (beadsMax >= n ? n : beadsMax) << endl;

  return 0;
}