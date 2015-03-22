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

int n;
pair< int, int > points[100010];
int moves;

bool comp(const pair< int, int > &a, const pair< int, int > &b) {
  return (a.first * 1LL * a.first + a.second * 1LL * a.second) < 
    (b.first * 1LL * b.first + b.second * 1LL * b.second);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin >> n;
  for (int i = 0; i < n; i++) cin >> points[i].first >> points[i].second;
  for (int i = 0; i < n; i++) {
    if (points[i].first == 0 || points[i].second == 0) moves += 4;
    else moves += 6;
  }
  cout << moves << "\n";
  sort(points, points + n, comp);
  for (int i = 0; i < n; i++) {
    if (points[i].first > 0) cout << "1 " << abs(points[i].first) << " R\n";
    else if (points[i].first < 0) cout << "1 " << abs(points[i].first) << " L\n";
    if (points[i].second  > 0) cout << "1 " << abs(points[i].second) << " U\n";
    else if (points[i].second < 0) cout << "1 " << abs(points[i].second) << " D\n";
    cout << "2\n";
    if (points[i].first > 0) cout << "1 " << abs(points[i].first) << " L\n";
    else if (points[i].first < 0) cout << "1 " << abs(points[i].first) << " R\n";
    if (points[i].second  > 0) cout << "1 " << abs(points[i].second) << " D\n";
    else if (points[i].second < 0) cout << "1 " << abs(points[i].second) << " U\n";
    cout << "3\n";
  }
  return 0;
}
