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

const int N = 3; 
long long a[N];

int main() {
  for(int i = 0; i < N; i++) cin >> a[i];
  
  sort(a, a + N);

  if((a[0] * 2 + a[1] * 2) < a[2]) {
    cout << a[0] + a[1] << endl;
  }
  else {
    cout << (a[0] + a[1] + a[2]) / 3 << endl;
  }

}