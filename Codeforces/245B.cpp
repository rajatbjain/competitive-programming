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
  string s, adr;
  cin >> s;

  if(s[0] == 'h') {
    adr = "http://";
    adr += s[4];
  }
  else if(s[0] == 'f') {
    adr = "ftp://";
    adr += s[3];
  }

  int i = (s[0] == 'h' ? 5 : 4);
  int pos = s.size();
  for( ; i < s.size(); i++) {
    
    if(s[i] != 'r') {
      adr += s[i];
    }
    else {
      if(s[i + 1] == 'u') {
        adr += ".ru/";
        pos = i + 2; 
        break;
      }
      else {
        adr += s[i];
      }
    }
  }

  for(int i = pos; i < s.size(); i++) {
    adr += s[i];
  }

  if(adr[adr.length() - 1] == '/') {
    adr = adr.substr(0, adr.length() - 1);
  }

  cout << adr << endl;

}