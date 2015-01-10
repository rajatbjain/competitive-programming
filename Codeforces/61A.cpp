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

int main() {
  string a, b;
  cin >> a >> b;
  int N = a.size();
  for(int i = 0; i < N; i++) {
    int x = a[i] - '0';
    int y = b[i] - '0';
    printf("%d", x ^ y);
  }
  printf("\n");
}