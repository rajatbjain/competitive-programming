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
#include <cassert>

using namespace std;

#define d(b) cout << #b << " " << b << endl

vector< pair< int, int > > ans;
int a[3010];

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0; i < n; i++) {
    int id = i;
    for(int j = i; j < n; j++) {
      if(a[j] < a[id]) id = j;
    }
    if(i == id) continue;
    swap(a[id], a[i]);
    ans.push_back(make_pair(i, id));
  }

  cout << ans.size() << endl;
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i].first << " " << ans[i].second << endl;
  }

}