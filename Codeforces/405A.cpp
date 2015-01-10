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

int a[123];

int main() {
  int n;
  cin >> n; 
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);

  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}