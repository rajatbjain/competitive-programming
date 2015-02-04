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

int main(int argc, char* argv[]) {
  ios_base::sync_with_stdio(0);
  string s;
  cin >> s;
  int x = 0, y = 0;
  for(int i = 0; i < (int) s.size(); i++) x = s[i] == 'x' ? x + 1 : x;
  for(int i = 0; i < (int) s.size(); i++) y = s[i] == 'y' ? y + 1 : y;
  int till = x > y ? x - y : y - x;
  char which = x > y ? 'x' : 'y';
  for(int i = 0; i < till; i++) cout << which;
  cout << '\n';
}


