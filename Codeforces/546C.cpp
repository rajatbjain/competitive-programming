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
#include <cassert>

using namespace std;

queue< int > a, b;

int main() {
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int k1, k2;
  cin >> k1;
  for (int i = 0; i < k1; i++) {
    int x;
    cin >> x;
    a.push(x);
  }   
  cin >> k2;
  for (int i = 0; i < k2; i++) {
    int x;
    cin >> x;
    b.push(x);
  }
  int i = 0;
  const int N = 1234567;
  while (i < N && !a.empty() && !b.empty()) {
    int aa = a.front();
    a.pop();
    int bb = b.front();
    b.pop();
    if (aa < bb) {
      b.push(aa);
      b.push(bb);
    }
    else if (bb < aa) {
      a.push(bb);
      a.push(aa);
    }
    else assert(false);
    i++;
  }
  if (i == N) {
    cout << -1 << endl;
    return 0;
  }
  if (a.empty()) cout << i << " " << 2 << endl;
  else if (b.empty()) cout << i << " " << 1 << endl; 
  return 0;
}