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

int a[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};

int main() {
  string s;
  cin >> s;
  cout << a[ s[0] - '0' ] * a[ s[1] - '0' ] << endl;
}