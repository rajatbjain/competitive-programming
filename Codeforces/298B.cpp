#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
}

#define d(b) cout << #b << " " << b << endl;

int main() {
  housekeeping();
  int t, a, b, x, y;
  cin >> t >> a >> b >> x >> y;
  string wind;
  cin >> wind;
  int N = 0, W = 0, E = 0, S = 0, Nx = 0, Wx = 0, Sx = 0, Ex = 0;
  if(x > a) {
    Ex = x - a;
  }  
  if(x < a) {
    Wx = a - x;
  }
  if(y > b) {
    Nx = y - b;
  }
  if(y < b) {
    Sx = b - y;
  }
  if(Nx == N && W == Wx && E == Ex && S == Sx) {
    puts("0");
    return 0;
  }
  for(int i = 0; i < t; i++) {
    if(wind[i] == 'N') N++;
    if(wind[i] == 'W') W++;
    if(wind[i] == 'E') E++;
    if(wind[i] == 'S') S++;
    // d(N); d(E); d(S); d(W);
    // d(Nx); d(Ex); d(Sx); d(Wx);
    if(Nx <= N && Wx <= W && Ex <= E && Sx <= S) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;

}