#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>	
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

#define d(b) cout << #b << " " << b << endl;

int main() {
  int k;
  scanf("%d", &k);
  vector < vector <int> > val (k+10, vector<int> (30, 0));
  string keeper[k+10];
  string s, ss;
  cin >> s;
  for(int i = 0; i < k; i++) {
    ss += s;
    keeper[i] = s;
  }

  for(int i = 0; i < s.size(); i++) {
    for(int j = 0; j < k; j++) {
      val[j][s[i] - 'a']++;
    }
  }

  int n; 
  scanf("%d", &n);
  while(n--) {
    char ch; int nn;
    scanf("%d %c", &nn, &ch);

    int ip = 0;
    while(val[ip][ch - 'a'] < nn) {
      nn -= val[ip][ch - 'a'];
      ip++;
    }
    int idx;
    // d(nn);
    for(int i = 0; i < keeper[ip].size(); i++) {
      if(keeper[ip][i] == ch) {
        if(nn == 1) {
          idx = i; 
        }
        nn--;
      }
    } 
    // d(idx);
    val[ip][ch - 'a']--;
    keeper[ip].erase(keeper[ip].begin()+idx);
  }

  for(int i = 0; i < k; i++) {
    cout << keeper[i];
  }

  cout << endl;
}