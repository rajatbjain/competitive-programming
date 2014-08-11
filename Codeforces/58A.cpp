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
  string s, a("hello");
  cin >> s;
  for(int i = 0, j = 0 ; i < s.size(); i++) {
    if(s[i] == a[j]) j++;
    if(j == a.size()) {
      cout << "YES\n";
      return 0;
    }
  } 

  cout << "NO\n";
  return 0;
}