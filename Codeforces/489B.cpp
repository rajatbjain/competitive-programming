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

int boy[110], girl[110];

int main() {
  int n, m;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> boy[i];
  cin >> m;
  for(int i = 0; i < m; i++) cin >> girl[i];

  sort(boy, boy + n);
  sort(girl, girl + m);
  
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(abs(boy[i] - girl[j]) <= 1) {
        cnt++;
        girl[j] = -9999;
        break;
      }
    }
  }

  cout << cnt << endl;

}