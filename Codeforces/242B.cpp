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

struct NODE {
  int id;
  int begin;
  int end;
}seg[100010];

bool comp(NODE a, NODE b) {
  if(a.begin < b.begin) return true;
  if(a.begin > b.begin) return false;
  else {
    if(a.end < b.end) return false;
    else return true;
  }
}

int main() {
  // freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> seg[i].begin >> seg[i].end;
    seg[i].id = i + 1;
  }
  sort(seg, seg + n, comp);
  int i, j;
  for(i = 0, j = 0; j < n;) {
    if(seg[i].begin <= seg[j].begin && seg[i].end >= seg[j].end) {
      j++;
      continue;
    }
    else break;
  }
  if(j == n) cout << seg[0].id << endl;
  else cout << -1 << endl;
}