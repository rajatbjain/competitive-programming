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

const int MAX = 1000010;

int main() {
  int n;
  cin >> n;
  long long f[MAX]; int cnt[MAX] = {0};
  for(int i = 0; i < n ; i++) {
    int ff;
    cin >> ff;
    cnt[ff]++;
  }

  f[0] = 0;

  for(int i = 1; i < MAX; i++) {
    f[i] = (long long)i * cnt[i];
    if(i - 2 >= 0) {
      f[i] += f[i - 2];
    }

    if(f[i - 1] > f[i]) {
      f[i] = f[i - 1];
    }
  }

  cout << f[MAX-1] << endl;
}