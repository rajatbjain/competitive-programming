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

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while(tt--) {
    int n;
    cin >> n;
    int ul = 1 << n;
    long long sum[ul];
    for(int i = 0; i < ul; i++) {
      cin >> sum[i];
    }
    sort(sum, sum + ul);
    map<long long, int> seen;
    vector< long long > currentSums;
    currentSums.push_back(0);

    seen[0]++;
    
    for(int i = 0; i < ul; i++) {
      if(seen[sum[i]] > 0) {
        seen[sum[i]]--; 
        continue;
      }
      cout << sum[i] << " ";
      vector< long long > new_sum(currentSums.size());
      for(int id = 0; id < (int) currentSums.size(); id++) {
        new_sum[id] = currentSums[id] + sum[i];
      }
      for(int id = 1; id < (int)currentSums.size(); id++) {
        seen[currentSums[id] + sum[i]]++;
      }
      currentSums.insert(currentSums.end(), new_sum.begin(), new_sum.end());
    }
    cout << '\n';
  }  
}