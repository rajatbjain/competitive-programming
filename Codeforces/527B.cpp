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

vector< int > mismatches[26];
map < pair< char, char >, int > mp;

int hammingDistance(const string& s, const string& t) {
  int dist = 0;
  int sz = s.size();
  for (int i = 0; i < sz; i++) if (s[i] != t[i]) dist++;
  return dist;
}

int main() {
  ios_base::sync_with_stdio(false);
  string s, t;
  int sz;
  cin >> sz >> s >> t;
  for (int i = 0; i < sz; i++) {
    if (s[i] != t[i]) {
      mismatches[s[i] - 'a'].push_back(i);
      mp[make_pair(s[i], t[i])] = i;
    }
  }
  for (auto x : mp) {
    char ch1 = x.first.first,
      ch2 = x.first.second;
    if (mp.find(make_pair(ch2, ch1)) != mp.end()) {
      cout << hammingDistance(s, t) - 2 << "\n";
      cout << x.second + 1 << " " << mp[make_pair(ch2, ch1)] + 1 << "\n";
      return 0;
    }
  }
  for (int i = 0; i < sz; i++) {
    if (s[i] != t[i]) {
      if (!mismatches[t[i] - 'a'].empty()) {
        cout << hammingDistance(s, t) - 1 << "\n";
        cout << i + 1 << " " << mismatches[t[i] - 'a'][0] + 1 << "\n";
        return 0;
      }
    }
  }
  cout << hammingDistance(s, t) << "\n-1 -1\n";
  return 0;
}
