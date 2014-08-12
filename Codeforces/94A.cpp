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
  string s, ss[8];
  cin >> s;
  for(int i = 0, j=0; i < s.size(); j++, i+=10) {
    ss[j] = s.substr(i, 10);
  }
  string a[10]; 
  for(int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 10; j++) {
      if(ss[i] == a[j]) {
        cout << j;
      }
    }
  }
  cout << "\n";
}