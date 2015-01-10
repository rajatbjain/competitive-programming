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

char a[100010];

int main() {
  string s;
  cin >> s;
  a[1] = s[0];
  int j = 1;
  for(int i = 1; i < (int) s.size(); i++) {
    if(s[i] == a[j]) j--;
    else a[++j] = s[i];
  }
  puts(j >= 1 ? "NO" : "YES");
}