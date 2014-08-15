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

int f[26] = {0};

bool check(int x, int y) {
  if(ceil(((double)x)/y) == floor(((double)x)/y)) return true;
  else return false;
}


int main() {
  int k;
  scanf("%d", &k);
  string s, str;
  cin >> s;
  for(int i = 0; i < s.size(); i++) {
    f[s[i] - 'a']++;
  }
  bool ok = true;
  for(int i = 0; i < 26; i++) {
    if(f[i] != 0 ) {
      if(check(f[i], k)) {
        f[i] /= k;
        for(int j = 0; j < f[i]; j++) {
          str += i + 'a';
        }
      }
      else {
        cout << "-1\n";
        return 0;
      }
    }
  }
  string final;
  for(int i = 0; i < k; i++) {
    final += str;
  }

  cout << final << endl;

}