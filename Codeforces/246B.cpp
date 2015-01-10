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

int n;

int main() {
  // freopen("input.txt","r", stdin);
  scanf("%d", &n);
  int sum = 0;
  for(int i = 0; i < n; i++) {
    int foo; scanf("%d", &foo);
    sum += foo;
  }

  if(!(sum % n)) cout << n << endl;
  else cout << n - 1 << endl;

}