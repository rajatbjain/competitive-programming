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

vector< int > p;
vector< int > d;
vector< int > ans;

void p_carry(int at) {
  int up = at;
  at--;
  bool ok = false;
  for( ; at >= 0; at--) {
    if(p[at] >= 1) {
      p[at]--;
      ok = true;
      break;
    }
  }
  if(!ok) return;
  at++;
  for(; at <= up; at++) {
    p[at] = 10 * 1 + p[at];
    if(at != up) {
      p[at]--;    
    }
  }
}

void d_carry(int at) {
  int up = at;
  at--;
  bool ok = false;
  for(; at >= 0; at--) {
    if(d[at] >= 1) {
      d[at]--;
      ok = true;
      break;
    }
  }
  if(!ok) return;
  at++;
  for(; at <= up; at++) {
    d[at] = 10 * 1 + d[at];
    if(at != up) {
      d[at]--;
    }
  }
}

void AnswerAndDie() {
  long long t = 0;
  int sz = p.size();
  for(int i = 0; i < sz; i++) {
    if(ans[i] == -1) {
      t = t * 10 + p[i];
    }
    else {
      t = t * 10 + ans[i];
    }
  }
  cout << t << endl;
  exit(0);
}

int main() {
  ios_base::sync_with_stdio(false);
  string x, y;
  cin >> x >> y;
  for (char ch : x) p.push_back(ch - '0');
  for (char ch : y) d.push_back(ch - '0');
  ans.resize(x.size());
  for(int &x: ans) x = -1;
  for(int p_at = x.size() - 1, d_at = y.size() - 1; p_at >= 0 && d_at >=0; p_at--, d_at--) {
    if(p[p_at] == 9) {
      ans[p_at] = 9;
    }
    else {
      if(p[p_at] < 9)
        p_carry(p_at);
      if(p[p_at] < 9) AnswerAndDie();
      int req = p[p_at] - 9;
      if(req > d[d_at]) d_carry(d_at);
      if(req > d[d_at]) AnswerAndDie();
      ans[p_at] = 9;
    }
  }
  AnswerAndDie();
  return 0;
}
