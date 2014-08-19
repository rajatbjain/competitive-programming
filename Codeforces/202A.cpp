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
  string s;
  cin >> s;
  int f[26] = {0};
  for(int i = 0; i < s.size(); i++) {
    f[s[i] - 'a']++;
  } 
  char c;
  for(int i = 25; i >= 0; i--) {
    if(f[i] > 0) {
      c = i + 'a';
      break;
    }
  }
  string str;
  for(int i = 0; i < f[c - 'a']; i++) {
    str += c;
  }
  cout << str << endl;
}