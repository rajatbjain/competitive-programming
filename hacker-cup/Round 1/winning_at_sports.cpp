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
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <list>
#include <memory.h>

using namespace std;

const long long mod = 1000000007;

long long dp_a[2100][2100], dp_b[2100][2100];
int a, b;

void win() {

  dp_a[1][0] = 1;

  for(int i = 1; i <= a; i++) {
    for(int j = 0; j <= b; j++) {
      if(j >= i) break;
      dp_a[i + 1][j] = (dp_a[i + 1][j] + dp_a[i][j]) % mod;
      dp_a[i][j + 1] = (dp_a[i][j + 1] + dp_a[i][j]) % mod;
    }
  }
}

void lose() {

  dp_b[0][1] = 1;

  for(int i = 0; i <= a; i++) {
    for(int j = 1; j <= b; j++) {
      if(j != b && i > j) continue;
      dp_b[i + 1][j] = (dp_b[i + 1][j] + dp_b[i][j]) % mod;
      dp_b[i][j + 1] = (dp_b[i][j + 1] + dp_b[i][j]) % mod;
    }
  }

}


int main() {
  int tt;
  cin >> tt;
  for(int Case = 1; Case <= tt; Case++) {

    memset(dp_a, 0, sizeof dp_a);
    memset(dp_b, 0, sizeof dp_b);

    scanf("%d-%d", &a, &b);

    win(); lose();

    cout << "Case #" << Case << ": " << dp_a[a][b] << " " << dp_b[a][b] << endl; 
  }

}