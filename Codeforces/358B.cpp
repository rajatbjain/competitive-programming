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

int n;
string s;
string b;
string a;

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    b += "<3" + s;
  }
  b += "<3";
  cin >> a;
  int asz = a.size();
  int bsz = b.size();
  int i = 0, j = 0;
  for(; i < asz && j < bsz; i++) {
    if(a[i] == b[j]) j++; 
  }
  if(j == bsz) {
    cout << "yes\n";
  }
  else {
    cout << "no\n";
  }
  return 0;
}
