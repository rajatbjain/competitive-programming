#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

map<int, int> hash;

int main() {
  // freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  int mx = -1;
  for(int i = 0; i < n; i++) {
    int foo;
    cin >> foo;
    hash[foo]++;
    mx = max(mx, foo);
  }
  map<int, int>::iterator it = hash.begin();
  vector<int> ul, ll;
  for(; it != hash.end(); it++) {
    if(it->first == mx) {
      ul.push_back(mx);
      continue;
    }
    if(it->second == 1) ul.push_back(it->first);
    else if(it->second >= 2) ll.push_back(it->first), ul.push_back(it->first);
  }
  sort(ul.begin(), ul.end());
  sort(ll.begin(), ll.end());

  cout << ul.size() + ll.size() << endl;
  
  for(int i = 0; i < ul.size(); i++) {
    cout << ul[i] << " ";
  }
  for(int i = ll.size() - 1; i >= 0; i--) {
    cout << ll[i] << " ";
  }
  cout << endl;
}