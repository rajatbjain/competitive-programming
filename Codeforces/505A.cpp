#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;

bool Palindrome(string s) {
  for(int i = 0, j = s.size() - 1; i <= j; i++, j--) {
    if(s[i] != s[j]) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(0);
  string s, u, v;
  cin >> s;
  
  if(Palindrome(s)) {
    if(s.size() % 2 == 0) {
      cout << s.substr(0, s.size() / 2) <<  'y'  << s.substr(s.size() / 2) << endl; 
      return 0;
    }
    else {
      cout << s.substr(0, s.size() / 2) << s[s.size() / 2] << s.substr(s.size() / 2) << endl;
      return 0;
    }
  }

  for(int i = 0, j = s.size() - 1; i <= j; i++, j--) {
    if( s[i] != s[j] ) {
      u = s, v = s;
      u = s.substr(0, j + 1) + s[i] + s.substr(j + 1);
      v = s.substr(0, i) + s[j] + s.substr(i);
      if(Palindrome(u)) {
        cout << u << endl;
        return 0;
      }
      if(Palindrome(v)) {
        cout << v << endl;
        return 0;
      } 
      break;     
    }
  }

  cout << "NA\n";

}