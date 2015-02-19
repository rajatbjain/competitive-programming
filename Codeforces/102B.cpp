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

int a[10];

bool check(const string& s) {
  if(s.size() > 1) return false;
  else return true;
}

string tostring(long long x) {
  string u = "";
  while(x > 0) {
    u += (x % 10) + '0';
    x /= 10;
  }
  return u;
}

string checksum(const string &s) {
  memset(a, 0, sizeof a);
  int N = s.size();
  for(int i = 0; i < N; i++) a[s[i] - '0']++;
  long long sum = 0;
  for(int i = 1; i <= 9; i++) sum += a[i] * i;
  return tostring(sum);
}

int main() {
  ios_base::sync_with_stdio(0);
  string s;
  cin >> s;
  int ans = 0;
  while(!check(s)) {
    s = checksum(s);
    ans++;        
  }
  cout << ans << endl;
  return 0;
}