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
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;

int n, m;
vector< int > g[123];
set< int > s[123];
vector< int > unused;

void print(vector< int > v) {
  for(int i = 0; i < (int) v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    int foo, bar;
    cin >> foo >> bar;
    g[foo].push_back(bar);
    g[bar].push_back(foo);
  }

  for(int i = 1; i <= n; i++) {
    vector< bool > seen(n + 1, 0);
    queue< int > q;
    q.push(i);
    s[i].insert(i);
    while(!q.empty()) {
      int u = q.front();
      q.pop();
      seen[u] = true;
      for(int id = 0; id < (int) g[u].size(); id++) {
        if(seen[g[u][id]]) continue;
        q.push(g[u][id]);
        s[i].insert(g[u][id]);
        seen[g[u][id]] = true;
      }
    }
  }
  
  for(int i = 1; i <= n; i++) {
    if(s[i].size() > 3) {
      cout << -1 << endl;
      return 0;
    }
  }

  vector< bool > seen(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    if(s[i].size() == 1){
      unused.push_back(i);
      seen[i] = true;    
    }
  }

  vector< vector < int >  > buckets(n / 3);

  for(int i = 1; i <= n; i++) {
    if(seen[i]) continue;
    for(int j = 0; j < (int) buckets.size(); j++) {
      if(buckets[j].size() + s[i].size() <= 3) {
        set< int >::const_iterator itr = s[i].begin();
        for(; itr != s[i].end(); itr++) {
          buckets[j].push_back(*itr);
          seen[*itr] = true;
        }
        break;
      }
    }
  }

  //print(unused);

  while(!unused.empty()) {
    for(int i = 0; i < (int) buckets.size(); i++) {
      if((int) buckets[i].size() < 3 && unused.size() > 0) {
        buckets[i].push_back(unused[unused.size() - 1]);
        unused.erase(unused.begin() + unused.size() - 1);
      }
    }
  }

  for(int i = 0; i < (int) buckets.size(); i++) {
    if(buckets[i].size() != 3) {
      cout << -1 << endl;
      return 0;
    }  
  }

  for(int i = 0; i < (int) buckets.size(); i++) {
    for(int j = 0; j < (int) buckets[i].size(); j++) {
      cout << buckets[i][j] << " ";
    }
    cout << endl;
  }

}