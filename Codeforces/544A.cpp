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

bool seen[26];
string s;
int n;
vector< string > ans;
int mark[123];

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n >> s;
  int sz = s.size();
  string buff = "";
  int tmp = n;
  for (int i = 0; i < sz; i++) {
    if (!seen[s[i] - 'a']) {
      mark[i] = 1 & (n > 0);
      seen[s[i] - 'a'] = true;
      n--;
    }
  }
  for (int i = 0, at = 0; i < tmp && at < sz; i++) {
    string tmp;
    tmp = s[at];
    at++;
    while(!mark[at] && at < sz) {
      tmp += s[at];
      at++;
    }
    ans.push_back(tmp);
  }
  if (ans.size() != tmp) {
    cout << "NO\n";
    return 0;
  }
  else {
    cout << "YES\n";
    for (string s : ans) {
      cout << s << endl;
    }
  }
  return 0;
}