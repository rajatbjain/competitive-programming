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

string s;

void parse(string &s) {
  int N = s.size();
  for(int i = 0; i < N; i++) {
    if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      s.erase(s.begin() + i);
      s.erase(s.begin() + i);
      s.erase(s.begin() + i);
      s.insert(s.begin() + i, ' ');
    }
  }
}

int main() {
  cin >> s;
  parse(s);
  stringstream ss(s);
  string word;
  while(ss >> word) {
    cout << word << " " ;
  }
}