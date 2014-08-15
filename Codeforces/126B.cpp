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

#define d(b) cout << #b << " " << b << endl;

int main() {
  string a;
  cin >> a;
  int n = a.size();
  vector<int> f(n);
  f[0] = 0;
  for(int i = 1, j; i < n; i++) {
    j = f[i-1];
    for(; j > 0 && a[j] != a[i];) j = f[j-1];

    if(a[j] == a[i]) {
      f[i] = j + 1;
    }
  }
  vector<int> freq(n, 0);

  for(int i = 0; i < n; i++) {
    freq[f[i]]++;
  }

  for(int i = n-1; i > 0; i--) {
    freq[f[i-1]] += freq[i];
  }

  int i = f[n-1];
  while(i > 0){
    d(i); d(freq[i]);
    if(freq[i] >= 2){
      cout << a.substr(0, i) <<endl;
      return 0;
    }
    d(i-1); d(f[i-1]);
    i = f[i-1];
  }

  cout << "Just a legend\n";
}
