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
  getline(cin, s);
  int pos = -1;
  bool ok;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '.') {
      pos = i;
      if(s[i - 1] == '9') {
        cout << "GOTO Vasilisa.\n";
        return 0;
      }
      else {
        if((int)s[i + 1] >= (int)'5') {
          ok = true;
        }
        else {
          ok = false;
        }
      }
    }
  } 

  for(int i = 0; i < pos - 1; i++) {
    cout << s[i];
  }
  if(ok) {
    int a = s[pos - 1] - '0';
    cout << ++a << endl;
  }
  else {
    cout << s[pos - 1] << endl;
  }
  return 0;
}