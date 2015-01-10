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

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
}

vector<bool> prime(10000010, 1);
const int ul = 10000010;
void sieve() {
  prime[0] = prime[1] = 0;
  prime[2] = 1;
  for(int i = 2; i * i < ul; i++) {
    if(prime[i]) {
      for(int j = i * i; j < ul; j += i) prime[j] = false;
    }
  }
}

int main() {
  housekeeping();
  sieve();
  int n;
  cin >> n;
  int cnt = 0, i = 0;
  for(int i = 0; i < ul && cnt < n; i++) {
    if(prime[i]) {
      cout << i << " ";
      cnt++;
    }
  }
}
