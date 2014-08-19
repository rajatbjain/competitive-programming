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

bool vowel(char c) {
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
  else return false;
}

int main() {
  // freopen("input.txt", "r", stdin);
  int i = 1;
  string s;
  bool ok = true;
  while(getline(cin, s)) {
    stringstream ss(s);
    char c; 
    int v = 0;
    while(ss >> c) {
      if(vowel(c)) {
        v++;
      }
    }

    if(i == 1 && v != 5) {
      ok = false;
    }
    if(i == 2 && v != 7) {
      ok = false;
    }
    if(i == 3 && v != 5) {
      ok = false;
    }

    i++;
  } 

  if(!ok) cout << "NO\n";
  else cout << "YES\n";
}