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

string s;
int b[1000100];
int N;
int aa, bb;

int main() {

  cin >> s;
  cin >> aa >> bb;
  N = s.size();
  b[N] = 0;

  int ten = 1;
  for(int i = N - 1; i >= 0; i--) {
    b[i] = (ten * (s[i] - '0') + b[i + 1]) % bb;
    ten = (ten * 10) % bb;
  }

  int num = 0;
  for(int i = 0; i + 1 < N; i++) {
    num = num * 10 + (s[i] - '0');
    num %= aa;
    if(num == 0 && s[i + 1] != '0') {
      if(b[i + 1] == 0) {
        cout << "YES\n";
        cout << s.substr(0, i + 1);
        cout << endl;
        cout << s.substr(i + 1, s.size() - i);
        cout << endl;
        return 0; 
      }
    }
  }
  
  cout << "NO\n";
}