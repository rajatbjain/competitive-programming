/*
 ID:
 LANG: C++
 TASK: milk2
 */

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
#include <ctime>
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

#define INPUT(file) freopen(file, "r", stdin)
#define OUTPUT(file) freopen(file, "w", stdout)

int main() {
  INPUT("milk2.in");
  OUTPUT("milk2.out");

  int n;
  cin >> n;
  vector< pair<int, int> > v; 
  for(int i = 0 ; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    v.push_back(make_pair(a, b));
  }

  sort(v.begin(), v.end());

  for(int i = 1 ; i < v.size();) {
    if(v[i - 1].first == v[i].first) {
      v[i - 1].second = max(v[i - 1].second, v[i].second);
      v.erase(v.begin() + i);
    } 

    if(v[i - 1].first < v[i].first) {
      if(v[i].first > v[i - 1].second) {
        i++;
      }
      else {
        v[i - 1].second = max(v[i - 1].second, v[i].second);
        v.erase(v.begin() + i);
      }
    } 

    else {
      v[i - 1].first = v[i].first;
      if(v[i - 1].second < v[i].second) {
        v[i - 1].second = max(v[i - 1].second, v[i].second);
      }
      v.erase(v.begin() + i);
    }
  }

  int maxT = 0, minT = 0;

  for(int i = 0; i < v.size(); i++) {
    maxT = max(maxT, (v[i].second - v[i].first));
    
    if(i + 1 >= v.size()) {
      minT = max(minT, 0);
    }
    else {
      minT = max(minT, (v[i + 1].first - v[i].second));
    }
  }

  cout << maxT << " " << minT << endl;

}

/*
  10
  2 3
  4 5
  6 7
  8 9
  10 11
  12 13
  14 15
  16 17
  18 19
  1 20
*/