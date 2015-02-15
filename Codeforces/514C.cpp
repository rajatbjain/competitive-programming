#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <iomanip>
#include <utility>
#include <iostream>
#include <map>

using namespace std;

int n, m;
unordered_map< string, bool > has;

inline pair < char, char > get(char ch) {
  if(ch == 'a') return make_pair('b', 'c');
  if(ch == 'b') return make_pair('a', 'c');
  if(ch == 'c') return make_pair('b', 'a');
} 

string cleverBrute(string s) {
  for(int i = 0; i < (int) s.size(); i++) {
    pair< char, char > other = get(s[i]);
    string t(s);
    t[i] = other.first;
    if(has.find(t) != has.end()) {
      return "YES";
    }
    t[i] = other.second; 
    if(has.find(t) != has.end()) {
      return "YES";
    }
  }
  return "NO";
}

string exhaustiveSearch(string s) {
  for(auto u : has) {
    if(u.first.size() == s.size()) {
      int dif = 0;
      for(int i = 0; i < (int) s.size(); i++) {
        if(u.first[i] != s[i]) dif++;
        if(dif > 1) break;
      }
      if(dif == 1) return "YES";
    }
  }
  return "NO";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n >> m;
  while(n--) {
    string s;
    cin >> s;
    has[s] = true;
  }
  while(m--) {
    string s;
    cin >> s;
    int N = s.size();
    cout << (N > 0 ? exhaustiveSearch(s) : cleverBrute(s)) << endl;
  }
}