// Z function ftw :)

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

bool isInt(int a, int b) {
  if(ceil((double)a/b) == floor((double)a/b)) return true;
  return false;
}

vector<int> zeda(string s) {
  int n = s.size();
  vector<int> z(n, 0);
  for(int i = 1, l = 0, r = 0; i < n; i++) {
    if( i <= r ) {
      z[i] = min(z[i - l], r - i + 1);
    }

    while(i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;

    if(i + z[i] - 1 > r) {
      l = i, r = i + z[i] - 1;
    }
  }
  return z;
}


int main() {
  // freopen("input.txt", "r", stdin);
  int t;
  cin >> t;
  getchar();
  while(t--){
    getchar();
    string s;
    cin >> s;
    int pos = 0;
    int n = s.size();
    vector <int> z = zeda(s);
    for(int i = 1; i < n; i++) {
      if(z[i] == n - i && isInt(n, i)) {
        pos = i; break;
      }
    }
    if(pos)
      cout << pos << endl;
    else 
      cout << n << endl;
    if(t) cout << endl;
  }
}