#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>

using namespace std;

class Trie {
public:
  Trie* edges[3];
  bool last;
  Trie() {
    memset(edges, NULL, sizeof edges);
    last = false;
  }
};

string s;
int n, m;
Trie* root = new Trie();

void insert(int index, Trie* cur) {
  if(index >= s.size()) {
    cur->last = true;
    return;
  }
  else {
    int ch = s[index] - 'a';
    if(cur->edges[ch] == NULL) {
      cur->edges[ch] = new Trie();
    }
    insert(index + 1, cur->edges[ch]);
  }
}

bool query(int i, int dif, Trie* cur) {
  if(cur == NULL) return false;
  if(i >= s.size()) return (dif == 1) && (cur->last);
  int ch = s[i] - 'a';
  if(dif == 0) {
    bool ret = 0;
    ret = (ret || query(i + 1, 0, cur->edges[ch]));
    for(int id = 0; id < 3; id++) {
      if(id == ch) continue;
      ret = (ret || query(i + 1, 1, cur->edges[id]));
    }
    return ret;
  }
  else {
    return query(i + 1, 1, cur->edges[ch]);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> s;
    insert(0, root);
  }
  for(int i = 0; i < m; i++) {
    cin >> s;
    if(query(0, 0, root)) cout << "YES\n";
    else cout << "NO\n";
  }
}