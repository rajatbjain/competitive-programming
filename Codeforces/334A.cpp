/*
  I have a dream to reach,
  and if I die trying,
  at least I've tried.
*/
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
  int n;
  cin >> n;
  int k = n * n;
  for(int i = 1; i <= k / 2; i++) {
    cout << i << " " << k - i + 1 << endl;
  }
}