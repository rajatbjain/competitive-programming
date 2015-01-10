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

int main() {
  housekeeping();
  int n; string s; 
  cin >> n >> s;
  int A = 0, F = 0, I = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'A') A++;
    if(s[i] == 'F') F++;
    if(s[i] == 'I') I++;
  }
  if(I) {
    cout << (I == 1 ? 1 : 0) << endl;
  }
  else {
    cout << A << endl;
  }
}