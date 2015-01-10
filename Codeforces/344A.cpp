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

int main() {
  int n;
  scanf("%d", &n);
  int c = 0;
  string s; char t;
  for(int i = 0; i < n; i++) {
    cin >> s;
    if(i == 0) {
      c++;
      t = s[s.size() - 2];
    }
    else {
     if(s[s.size() - 2] == t) continue;
     c++;
     t = s[s.size() - 2];
    }
  }  

  cout << c << endl;
}