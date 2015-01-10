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

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
}

vector<int> ff, ss;

int main() {
  housekeeping();
  int n; string s;
  cin >> n >> s;
  for(int i = 0; i < n; i++) {
    ff.push_back(s[i] - '0');
  }
  for(int i = n; i < 2 * n; i++) {
    ss.push_back(s[i] - '0');
  }
  sort(ff.begin(), ff.end());
  sort(ss.begin(), ss.end());
  
  bool ok = true;

  if(ff[0] > ss[0]) {
    for(int i = 0; i < ff.size(); i++) {
      if(ff[i] > ss[i]) continue;
      else ok = false;
    }
  }
  else if(ff[0] < ss[0]) {
   for(int i = 0; i < ff.size(); i++) {
     if(ff[i] < ss[i]) continue;
     else ok = false;
   } 
  }
  else {
    ok = false;
  }
  puts(ok ? "YES" : "NO");
}