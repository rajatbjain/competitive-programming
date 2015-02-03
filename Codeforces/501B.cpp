#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;

map< string, string > old;
map< string, string > handles;

int main() {
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  
  while(n--) {
    string s, t;
    cin >> s >> t;
    if(handles.find(s) == handles.end()) {
      old[s] = t;
      handles[t] = s;
    }
    else {
      string head = handles[s];
      old[head] = t;
      handles[t] = head;
    }
  }

  map< string, string > :: iterator itr = old.begin();

  cout << old.size() << endl;

  while( itr != old.end() ){ 
    cout << itr->first << " " << itr->second << endl;
    itr++;
  }

}