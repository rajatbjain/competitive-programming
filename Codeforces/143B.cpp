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
  bool isneg = false;
  cin >> s;
  if(s[0] == '-') {
    isneg = true;
    s.erase(0, 1);
    cout << "(";
  }
  cout << "$";
  int pos = -1;
  vector<int> v;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '.') {
      pos = i;
      break;
    }
    int val = s[i];
    v.push_back(val);
  }

  vector<char> vv;
  for(int i = v.size() - 1, j = 0; i >= 0; i--, j++) {
    if(j == 3) {
      vv.push_back(',');
      j = 0;
    }
    vv.push_back(v[i]);
  }

  for(int i = vv.size() - 1; i >= 0; i--) {
     cout << vv[i];
  }
  cout << ".";

  if(pos == -1) {
    cout << "00";
  }

  else {
    if(s.size() - 1 - pos >= 2) {
      for(int i = pos + 1; i < pos + 3; i++) {
        cout << s[i];
      }  
    }
    else {
      int x = s.size() - pos - 1;
      if(x == 1) cout << s[s.size() - 1] << "0";
      if(x == 0) cout << "00";
    }
  }

  if(isneg) cout << ")\n";
  else cout << "\n";
  
}