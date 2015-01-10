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
#define d(x) if(debug_mode == true) cout << #x << " -> " << x << endl;
using namespace std;
bool debug_mode = false;
void housekeeping() {
  ios_base::sync_with_stdio(false);
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
}

map<int, int> home, away;
vector< pair<int, int> > wore(100010), color(100010);

int main() {
  housekeeping();
  int n, g;
  cin >> n;
  g = n - 1;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    cin >> foo >> bar;
    home[foo]++;
    away[bar]++;
    color[i].first = foo, color[i].second = bar;
    wore[i].first = g;
  }

  for(int i = 0; i < n; i++) {
    d(i);
    int x = color[i].second;
    int r = home[x];
    wore[i].second = g - r;
    wore[i].first += r;
    cout << wore[i].first << " " << wore[i].second << endl;
  }

}