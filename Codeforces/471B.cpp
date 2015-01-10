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

vector< pair <int, int> > v; 
int f[2010];

#define d(b) cout << #b << "->" << b << endl

void print() {
  for(int i = 0; i < v.size(); i++) {
    cout << v[i].second << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  for(int i = 0 ; i < n; i++) {
    int foo;
    cin >> foo;
    f[foo]++;
    v.push_back(make_pair(foo, i + 1));
  }
  int cnt = 0;
  for(int i = 0; i < 2010; i++) {
    if(f[i] == 2) {
      cnt++;
    }
    else if(f[i] > 2) {
      cnt += 3;
      break;
    }
  }
  if(cnt < 2) {
    cout << "NO\n";
    return 0;
  }
  cout << "YES\n";
  sort(v.begin(), v.end());
    
  int one = 0, two = 0;
  cnt = 0;
  for(int i = 0; i < (int) v.size(); i++) {
    cout << v[i].second << " ";
    if(cnt < 2 && i > 0 && v[i].first == v[i - 1].first) {
      if(cnt == 0) {
        one = i;
      }
      if(cnt == 1) {
        two = i;
      }
      cnt++;
    }
  }
  // d(one); d(two);
  cout << endl;
  swap(v[one].second, v[one - 1].second);
  print();
  swap(v[two].second, v[two - 1].second);
  print();

}