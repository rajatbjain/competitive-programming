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

int n, d;
int a, b;

vector< pair < long long, int > > mb;

int main() {
  cin >> n >> d;
  cin >> a >> b;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    cin >> foo >> bar;
    mb.push_back(make_pair(foo * a + bar * b, i + 1));
  }
  sort(mb.begin(), mb.end());
  int c = 0 ;
  for(int i = 0; i < (int) mb.size(); i++) {
    if(mb[i].first > d) {
      break;
    }
    else {
      c++;
      d -= mb[i].first;
    }
  }

  cout << c << endl;
  for(int i = 0; i < c; i++) cout << mb[i].second << " ";
  cout << endl; 
}