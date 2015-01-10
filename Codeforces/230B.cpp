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
#define d(b) cout << #b << " " << b << endl;

void housekeeping() {
  ios_base::sync_with_stdio(false);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
}

const int ul = 1000001;
bool isPrime[1000010];
void sieve() {
  memset(isPrime, 1, sizeof(isPrime));
  isPrime[0] = isPrime[1] = false;
  isPrime[2] = true;
  for(int i = 2; i * i < ul; i++) {
    if(isPrime[i]) {
      for(int j = i * i; j <= ul; j += i) {
        isPrime[j] = false;
      }
    }
  }
}

bool calc(long long x) {
  double xd = sqrt(x);
  long long xl = (long long) xd;
  if(xl == xd && isPrime[xl]) return true;
  return false;
}

int main() {
  housekeeping();
  sieve();
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    long long foo;
    cin >> foo;
    bool ok = calc(foo);
    puts(ok ? "YES" : "NO");
  }
}