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

void tolower(string &s) {
  for(int i = 0; i < s.size(); i++) {
    if(s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] - 'A' + 'a';
    }
  }
}

int main() {
  string a, b;
  cin >> a >> b;
  tolower(a); 
  tolower(b);

  if(a == b) cout << "0\n";
  if(a > b) cout << "1\n";
  if(a < b) cout << "-1\n";
}