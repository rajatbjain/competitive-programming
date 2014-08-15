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

int n;

bool foo(int *a, int bar) {
  int sum = 0; bool ok = true;
  for(int i = 0; i < n; i++ ) {
    if(sum + a[i] > bar) {
      ok = false; break;
    }
    sum += a[i];
    if(sum == bar) {
      sum = 0;
    }
  }
  return ok;
}


int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  cin >> n;
  int a[n], sum = 0;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    sum += a[i];
  }
  vector<int> b;
  for(int i = 1; i * i <= sum; i++) {
    if(sum % i == 0) {
      if(foo(a, i)) {
        b.push_back(i);
      }
    }
    if(sum / i != i ) {
      if(foo(a, sum / i)) {
        b.push_back(sum / i);
      }
    }
  }
  sort(b.begin(), b.end());
  for(int i = 0; i < b.size(); i++) {
    cout << b[i] << " ";
  }
}