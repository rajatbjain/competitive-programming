#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
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
#include <iomanip>
#include <ctime>
#include <cassert>

using namespace std;

int at_s, at;
int q;
int dist;


int main() {
  string s, t;
  cin >> s >> t;

  for(int i = 0; i < (int) s.size(); i++) {
    if(s[i] == '+') at_s++;
    else if(s[i] == '-') at_s--;

    if(t[i] == '+') at++;
    else if(t[i] == '-') at--;
    else if (t[i] == '?') q++;
  }

  dist = at_s - at;
  dist = abs(dist);
  if(q < dist) {
    cout << 0.00 << endl;
    return 0;
  }

  int x = (q + dist) / 2;
  int ans = 1;
  for(int i = 0; i < x; i++) ans *= q - i;
  for(int i = 2; i <= x; i++) ans /= i;

  printf("%.11f", (double)ans / (1 << q));
}