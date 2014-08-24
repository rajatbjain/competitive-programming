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

string change(long long num, int base){ 
  string str;
  while(num > 0) {
    int redun = num % base;
    str += redun + '0';
    num /= base;
  }
  reverse(str.begin(), str.end());
  return str;
}

bool okay(string s) {
  for(int i = 0, j = s.size() - 1; i < s.size() && j >= 0; i++, j--) {
    if(s[i] != s[j]) return false;
  }
  return true;
}

int main() {
  INPUT("dualpal.in");
  OUTPUT("dualpal.out");

  int n, s;
  cin >> n >> s;
  vector<int> v;
  for(int i = s + 1, j = 0; j < n; i++) {
    int cnt = 0;
    for(int k = 2; k <= 10; k++) {
      string s = change(i, k);
      if(okay(s)) cnt++;
      if(cnt >= 2) break;
    }
    if(cnt >= 2) {
      j++;
      v.push_back(i);
    }
  }

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  return 0;
}