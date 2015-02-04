/*
  I always did something I was little not ready to do.
  I think that's how you grow. When there's that moment 
  of 'Wow, I am not really sure I can do this...' and
  push through those moments, that's when you have a
  BREAKTHROUGH.
*/

#include <cstdio>
#include <bitset>
#include <cassert>
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
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>
#include <list>

using namespace std;

vector< string > v;
string ans = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";

void better(string s) {
  if(s.size() < ans.size()) ans = s;
  else if(s.size() == ans.size()) ans = s < ans ? s : ans;
}

bool find(string str) {
  for(int i = 0; i < (int) v.size(); i++) {
    if(v[i].find(str) != string::npos) return true;
  }
  return false;
}

void backtracking(string s) {
  if(s.size() > 20) return;
  for(int i = 0; i < 26; i++) {
    string w = s + (char)('a' + i);
    if(find(w)) backtracking(w);
    else better(w);
  } 
}

int main() {
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  for( int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }
  
  for(int i = 0; i < 26; i++) {
    string w;
    w += (char)('a' + i);
    if( find(w) ) backtracking(w);
    else better(w);
  }

  cout << ans << endl;

}
