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

int n, m;

map< string, string > ans;

inline string smaller(const string& a, const string& b) {
  if(a.size() <= b.size()) return a;
  else return b;
}

int main() {
  cin >> n >> m;
  while(m--) {
    string a, b;
    cin >> a >> b;
    ans[a] = smaller(a, b);
  }
  while(n--) {
    string foo;
    cin >> foo;
    cout << ans[foo] << " ";
  }
  cout << endl;
}