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

map <string, int> m;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    m[s]++;
  }
  map<string, int>::iterator it;
  string s; int MAX = 0;
  for(it = m.begin(); it != m.end(); it++) {
    if(it->second > MAX) {
      MAX = it->second;
      s = it->first;
    }
  }

  cout << s << endl;
}