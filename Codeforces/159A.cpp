#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>	
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

set <pair <string, string> > vv;
int main() {
  int n, t, itr = 0;
  scanf("%d %d", &n, &t);
  string ss1[n], ss2[n]; int diff[n];
  int test = n;
  while(test--) {
    string xx, yy; int d;
    cin >> xx >> yy >> d;
    ss1[itr] = xx; ss2[itr] = yy;
    diff[itr] = d;
    itr++;
  } 
 for(int i = 0 ; i < n; i++) {
  for(int j = i+1; j < n; j++) {
    if(ss1[i] == ss2[j] && ss1[j] == ss2[i] && (abs(diff[i] - diff[j]) <= t && abs(diff[i] - diff[j]) > 0)) {
      string o, t;
      if(ss1[i] > ss2[i]) o = ss1[i], t = ss2[i];
      else o = ss2[i], t = ss1[i];

      vv.insert(make_pair(t, o));
    }
  }
 }


 cout << vv.size() << endl;
 set <pair <string, string> > :: iterator it;
 for(it = vv.begin(); it != vv.end(); it++) {
  cout << it->first << " " << it->second << endl;
 }

}