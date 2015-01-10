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
#include <ctime>

using namespace std;

vector< long long > a; // 1 black 2 red
vector< char > b;
int Q = 1;

void compute() {
  long long x = 2;
  long long l = 0;

  while(x <= 2000000100) {
    a.push_back(x - 1);
    if(l % 2 == 0) {
      b.push_back('b');
    }
    else {
      b.push_back('r');
    }
    x <<= 1;
    l++;
  }
}

char search(int x) {
  int u = lower_bound(a.begin(), a.end(), x) - a.begin();
  return b[u];
}

void get(int x, int y, char c) {
  int dist = 1;
  char u = search(x);
  char v = search(y);
  while(x != y) {
    if(x > y) swap(x, y);
    y >>= 1;
    dist++;
  }
  int R, B;
  R = B = 0;

  if(u == 'r' && v == 'r') R = dist / 2 + 1, B = dist / 2;
  else if(u == 'b' && v == 'r') R = B = dist / 2;
  else if(u == 'r' && v == 'b') R = B = dist / 2;
  else if(u == 'b' && v == 'b') B = dist / 2 + 1, R = dist / 2;
  
  if(Q % 2) {
    cout << (c == 'r' ? R : B) << endl;
  }
  else {
    cout << (c == 'r' ? B : R) << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  int q;
  cin >> q;
  compute();
  while(q--) {
    string s;
    cin >> s;
    if(s[1] == 'i') {
      Q++;
      continue;
    }
    int x, y;
    cin >> x >> y;
    get(x, y, s[1]);
  } 
}