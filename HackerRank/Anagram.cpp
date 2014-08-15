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
  // freopen("input.txt", "r", stdin);
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    if(s.size() % 2 ==  1) cout << "-1\n"; 
    else {
      int ff[26] = {0}, gg[26] = {0};
      string a = s.substr(0, s.size() / 2);
      string b = s.substr(s.size() / 2);
      for(int i = 0; i < a.size(); i++) {
        ff[a[i] - 'a']++;
        gg[b[i] - 'a']++;
      }
      
      int diff = 0;
      for(int i = 0; i < 26; i++) if(ff[i] > 0 || gg[i] > 0) diff += abs(ff[i] - gg[i]);
      cout << diff / 2 << endl;
    }
  } 
}