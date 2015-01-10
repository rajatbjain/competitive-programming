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

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
}

string s;
int dp[100010];
int m;

int main() {
  housekeeping();
  cin >> s;
  cin >> m;
  for(int i = 0; i < s.size() - 1; i++) {
    if(s[i] == s[i + 1]) {
      dp[i + 1] = dp[i] + 1;
    }
    else {
      dp[i + 1] = dp[i];
    }
  }

  cout << endl;
  for(int i = 0; i < m; i++) {
    int foo, bar;
    cin >> foo >> bar;
    --bar, --foo;
    cout << dp[bar] - dp[foo] << endl;
  }
}