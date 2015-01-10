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

long long hash[1234];
int a[100010]; 

int main() {
  // freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int f;
    cin >> f;
    a[i] = f;
    if(f < 0) {
      f *= -1;
      hash[f]++;
    }
    else if(f > 0) {
      f *= 11;
      hash[f]++;
    }
    else {
      hash[f]++;
    }
  } 

  long long ans = 0;

  for(int i = 1; i <= 10; i++) { 
    if(hash[i]) {
      int x = i * 11;
      long long res = hash[i] * hash[x];
      ans += res;
    }
  }

  long long x = hash[0];
  if(x) {
    ans += ((x - 1) * x ) / 2;    
  }
  cout << ans << endl;
}