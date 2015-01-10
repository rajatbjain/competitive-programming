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

bool seen[100010];
int pos[100010];

int main() {
  // freopen("input.txt", "r", stdin);
  int N, S, T;
  cin >> N >> S >> T;
  for(int i = 1; i <= N; i++) {
    cin >> pos[i];
  }
  int c = 0;
  while(S != T) {
    if(seen[S]) {
      cout << -1 << endl;
      return 0;
    }
    seen[S] = true;
    S = pos[S];
    c++;
  }
  cout << c << endl;
}