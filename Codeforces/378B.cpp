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

int n;
int a[1234567], b[1234567];
vector< int > all;
int k;
bool mark1[1234567], mark2[1234567];

void mark(int x) {
  if(binary_search(a, a + n, x)) {
    int u = lower_bound(a, a + n, x) - a;
    mark1[u] = true;
  }
  else {
    int v = lower_bound(b, b + n, x) - b;
    mark2[v] = true;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i]>> b[i];
    all.push_back(a[i]);
    all.push_back(b[i]);
  }
  sort(all.begin(), all.end());
  for(int i = 0; i < n; i++) {
    mark(all[i]);   
  }
  while((2 * k) < n) k++;
  if(2 * k > n) k--;
  string s1, s2;
  for(int i = 0; i < n; i++) {
    s1 += (mark1[i] == true || i < k ? "1" : "0");
    s2 += (mark2[i] == true || i < k ? "1" : "0");   
  }
  cout << s1 << endl;
  cout << s2 << endl;
  return 0;
}                     