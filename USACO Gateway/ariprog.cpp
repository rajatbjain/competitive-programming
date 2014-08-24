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

int n, m;
vector< pair < int, int > > v;

bool foo(pair<int, int> a, pair<int, int> b) {
  if(a.second < b.second) return true;
  else if(a.second > b.second) return false;
  else {
    if(a.first < b.first) return true;
    else return false;
  }
}

int main() {

  INPUT("ariprog.in");
  OUTPUT("ariprog.out");
  scanf("%d %d", &n, &m);
  int hash[125001] = {0};
  for(int i = 0; i <= m; i++) {
    for(int j = 0; j <= m; j++) {
      int foo = i * i + j * j;
      hash[foo]++;
    }
  }

  for(int ii = 0; ii < 125000; ii++) {
    if(hash[ii] == 0) continue;
    int upto = (((m * m + m * m) - ii) / (n - 1));
    for(int i = 1; i <= upto; i++) {
      int x = 0;
      for(int j = ii, k = 0; k < n; k++, j+=i) {
        if(hash[j] > 0) x++;
        else break;
      }
      if(x >= n) v.push_back(make_pair(ii, i)); 
    }
  }

  if(v.empty()) {
    cout << "NONE\n";
    return 0;
  }

  sort(v.begin(), v.end(), foo);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i].first << " " << v[i].second << endl;
  }

  return 0;
}