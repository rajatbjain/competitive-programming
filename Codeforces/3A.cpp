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

#define long long long
#define lld I64d

using namespace std;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1 , 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
pair< int, int > from, to;
vector< string > repr;

inline bool equals( const pair< int, int > &a, const pair< int, int > &b) {
  return a.first == b.first && a.second == b.second;
}

string strip(string& s) {
  istringstream scanner(s);
  scanner >> s;
  return s;
}

int main() {
  string s, t;
  cin >> s >> t;
  from = make_pair(s[0] - 'a' + 1, s[1] - '0');
  to = make_pair(t[0] - 'a' + 1, t[1] - '0');
  while(!equals(from, to)) {
    int x = from.first == to.first ? 0 : from.first < to.first ? -1 : 1;
    int y = from.second == to.second ? 0 : from.second < to.second ? -1 : 1;
    string put = "  ";
    if(x == 1) put[0] = 'L';
    if(x == -1) put[0] = 'R';
    if(y == 1) put[1] = 'D';
    if(y == -1) put[1] = 'U';
    repr.push_back(put);
    from.first -= x;
    from.second -= y;
  }
  int sz = repr.size();
  cout << sz << '\n';
  for(int i = 0; i < sz; i++) {
    cout << strip(repr[i]) << "\n";
  }
  return 0;
}