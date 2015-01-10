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

vector< pair<double, pair<int, int> > > fraction;
int hash[1234567];

int main() {
  freopen("frac1.in", "r", stdin);
  freopen("frac1.out", "w", stdout);
  int n;
  cin >> n;
  cout << "0/1\n";
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if( (double)i / j <= 1.000) {
        int x = ((double)i / j) * 1000000;
        if(hash[x]) continue;
        hash[x]++;
        fraction.push_back(make_pair((double)i/j, make_pair(i, j)));
      } 
    }
  }

  sort(fraction.begin(), fraction.end());

  for(int i = 0; i < fraction.size(); i++) {
    cout << fraction[i].second.first << "/" << fraction[i].second.second << endl;
  }

}