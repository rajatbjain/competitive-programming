#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>	
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

#define d(b) cout << #b << " " << b << endl;

int main() {
  // freopen("input.txt", "r", stdin);
  string s;
  int v;
  cin >> s;
  if(s.length() == 1) {
    v = s[s.length()-1];
  }
  else {
    v = (s[s.length()-2]-'0')*10 + (s[s.length()-1] - '0');  
  }
  
  // cout << v << endl;
  if(v % 4 == 0) cout << "4\n";
  else cout << "0\n";
}