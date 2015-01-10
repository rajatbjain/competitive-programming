#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
}
string s;
int n;

int main() {
  housekeeping();
  cin >> n >> s;
  int cnt = 0;
  int i, j;
  for(i = 0; i < n; i++) {
    if(s[i] == '.') cnt++;
    else {
      if(s[i] == 'L') cnt = 0;
      break;
    }
  }
  int tmp = 0;
  for(j = n - 1; j >= 0 && j >= i; j--) {
    if(s[j] == '.') tmp++;
    else {
      if(s[j] == 'R') tmp = 0;
      break;
    }
  }
  cnt += tmp;
  char start = s[i], stop;
  tmp = 0;
  int c = 0;
  i++;
  for(; i <= j; i++) {
    if(s[i] == '.') c++;
    else {
      stop = s[i];
      if(start == 'L' && stop == 'R') {
        tmp += c;
      }
      else if(start == 'R' && stop == 'L') {
        if(c & 1) tmp++;
      } 
      c = 0;
      start = stop;
    }
  }

  cout << cnt + tmp << endl;
}