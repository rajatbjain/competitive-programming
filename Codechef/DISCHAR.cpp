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

int a[26];

int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    memset(a, 0, sizeof(a));
    string s;
    cin >> s;
    for(int i = 0; i < (int) s.size(); i++) {
      a[s[i] - 'a'] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < 26; i++) {
      if(a[i]) cnt++;
    }
    cout << cnt << endl;
  } 
}