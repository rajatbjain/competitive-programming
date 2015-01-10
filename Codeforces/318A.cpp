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

void printEven(long long k) {
  cout << k * 2 << endl;
}

void printOdd(long long k) {
  cout << 1 + ((k - 1) * 2) << endl;
}

int main() {
  long long n, k, mid;
  cin >> n >> k;
  mid = ceil((double)n / 2);
  if(k > mid) {
    printEven(k - mid);
  } 
  else {
    printOdd(k);
  }
}