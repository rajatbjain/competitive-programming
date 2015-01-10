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

string a, b;
int home[12345], away[12345];

map< int , bool > hm, aw;

int main() {
  cin >> a >> b;
  int n;
  cin >> n;
  while(n--) {
    int t, number; char where, card;
    cin >> t >> where >> number >> card;
    if(where == 'a') {
      int add = card == 'r' ? 2 : 1;
      if(away[number] == -1) {
        continue;
      }
      away[number] += add;
      if(away[number] >= 2) {
        cout << b << " " << number << " " << t << endl;
        away[number] = -1;
      }
    }
    else {
      int add = card == 'r' ? 2 : 1;
      if(home[number] == -1) continue;
      home[number] += add;
      if(home[number] >= 2) {
        cout << a << " " << number << " " << t << endl;
        home[number] = -1;
      }
    }
  }
}