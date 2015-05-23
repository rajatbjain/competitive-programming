#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  string s, t;
  cin >> s >> t;
  int sz = s.size();
  int cnt = 0;
  for (int i = 0; i < sz; i++) {
    if (s[i] != t[i]) cnt++;
  } 
  if (cnt % 2) {
    cout << "impossible\n";
    return 0;
  }
  cnt /= 2;
  int cnt2 = cnt;
  vector< char > v;
  for (int i = 0; i < sz; i++) {
    if (s[i] == t[i]) {
      v.push_back(s[i]);
    }
    else {
      if (cnt > 0) {
        v.push_back(s[i]);
        cnt--;
      }
      else if (cnt2 > 0) {
        v.push_back(t[i]);
        cnt2--;
      }
    }
  }
  for(auto ch : v) cout << ch;
  cout << endl;
  return 0;
}