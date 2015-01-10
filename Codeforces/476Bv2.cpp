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

string s, t;
int N;
int at_s;
int pl, mn;
static int cnt = 0;

bool check(int p, int m) { 
  if(p == pl && m == mn) return true;
  else return false;
}

void dfs(int i, int p, int m) {
  if(i == N && check(p, m)) {
    cnt++;
    return;
  }

  if(i > N) return;

  if(t[i] == '+') dfs(i + 1, p + 1, m);
  else if(t[i] == '-') dfs(i + 1, p, m + 1);
  else {
    dfs(i + 1, p + 1, m);
    dfs(i + 1, p, m + 1);
  }
}

int main() {
  cin >> s >> t;
  N = s.size();
  int q = 0;
  for(int i = 0; i < N; i++) {
    if(t[i] == '?') q++;
  }

  for(int i = 0; i < N; i++) {
    if(s[i] == '+') at_s++, pl++;
    else at_s--, mn++;
  }
  dfs(0, 0, 0);
  printf("%.12f\n", (double) cnt / (1 << q));
}