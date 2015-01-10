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

string ternary(int n) {
  string t = "";
  while(n) {
    char ch = (n % 3 + '0');
    t = ch + t;
    n /= 3;
  }
  return t;
}

long long calc(const string &u, const string &v) {
  vector< int > s;

  for(int i = 0; i < (int) u.size(); i++) {
    int x = u[i] - '0';
    int y = v[i] - '0';
    int tmp = (y - x + 3) % 3;
    s.push_back(tmp);
  }
  int num = 0;
  long long power = 3;
  if(s.empty()) {
    printf("0\n");
    exit(0);
  }
  num = s[s.size() - 1];
  for(int i = s.size() - 2; i >= 0; i--) {
    num += power * (s[i]);
    power *= 3;
  }
  return num;
}

int main() {
  int a, b;
  cin >> a >> b;

  string u = ternary(a);    
  string v = ternary(b);
  while(u.size() < v.size()) {
    u = '0' + u;
  }

  while(v.size() < u.size()) {
    v = '0' + v;
  }
  cout << calc(u, v) << '\n';

}