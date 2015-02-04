#include <cstdio>
#include <bitset>
#include <cassert>
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
#include <list>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  string s;
  cin >> s;
  if(n % 2 == 0) {
    for(int i = 0; i < n - 2; i += 2) {
      cout << s.substr(i, 2) << "-";
    }
    cout << s.substr(s.size() - 2);
  }
  else {
    int till = n / 2 - 1;
    for(int i = 0; i < 2 * till; i += 2) {
      cout << s.substr(i, 2) << "-";
    }
    cout << s.substr(s.size() - 3);
  }
  cout << '\n';
  
}