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

string Orig = "the quick brown fox jumps over the lazy dog";
char tbl[26];
bool mapstring(string s) {
  for (int i = 0; i < 26; ++i) {
    tbl[i] = 0;
  }
  for(int i = 0; i < Orig.size(); i++) {
    if(Orig[i] == ' ') continue;
    tbl[s[i] - 'a'] = Orig[i]; 
  }
  for(int i = 0 ; i < 26 ; i++) {
    if(!(tbl[i] >= 'a' && tbl[i] <= 'z')) return false;
  }

  return true;
}

int main() {
  // freopen("input.txt", "r", stdin);
  int t, N;
  scanf("%d", &t);
  cin.get();
  cin.get();
  N = 0;
  while(t--) {
    if(N > 0) {
      cin.get();
    }
    ++N;
    string s;
    bool ok = false;
    vector< string > v;
    
    while(1) {
      if(cin.peek() == '\n' || cin.eof()) break;
      getline(cin, s);
      v.push_back(s);
      if(s.size() == Orig.size()) {
         // cout << "Compare " << s << endl;
         // cout << "COmpare " << Orig << endl;
        ok = mapstring(s);
      }
    }

    if(ok) {
      for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
          if(v[i][j] == ' ') continue;
          v[i][j] = tbl[v[i][j] - 'a'];
        }
        cout << v[i] << endl;
      }
    }
    else {
      cout << "No solution.\n";
    }
    if(t) cout << endl;
  }
}