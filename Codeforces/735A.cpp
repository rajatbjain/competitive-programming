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

void print_r(vector< int > &vec) {
  unsigned int sz = (unsigned int) vec.size();
  for(int i = 0; i < sz - 1; i++) {
    fprintf(stderr, "%d, ", vec[i]);
  }
  fprintf(stderr, "%d\n", vec[sz - 1]);
}

// -- BEGIN HACKING FROM HERE -- STANDARD TEMPLATE ENDS HERE
int n, k;
string s;
vector< int > v;



int main() {
  cin >> n >> k;
  cin >> s;
  v.resize(s.size(), 0);
  int initialPos = 0;
  for(int i = 0; i < (int) s.size(); i++) {
    if(s[i] == 'G') {
      initialPos = i;
      break;
    }
  }
  int target = 0;
  for(int i = 0; i < (int) s.size(); i++) {
    if(s[i] == 'T') {
      target = i;
      break;
    }
  }
  v[initialPos] = 1;
  for(int cycles = 1; cycles <= 200; cycles++) {
    for(int i = 0; i < (int) s.size(); i++) {
      if(0 <= i - k && s[i - k] != '#' && v[i] == 1) {
        v[i - k] = 1;
      }
      if(i + k <= n - 1 && s[i + k] != '#' && v[i] == 1) {
        v[i + k] = 1;
      }
    }
  }
  // print_r(v);
  if(v[target] == 1) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}
