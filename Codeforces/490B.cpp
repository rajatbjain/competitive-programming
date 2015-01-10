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

int n;
int a[1000100];
int ans[1000100];
int count_a[1000100], count_b[1000100];


int main() {
  cin >> n;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    cin >> foo >> bar;
    count_a[foo]++, count_b[bar]++;
    a[foo] = bar;
  }

  for(int i = 0; i <= 1000000; i++) {
    if(count_a[i] == 1 && count_b[i] == 0) {
      ans[1] = i;
      break;
    }
  }

  for(int i = 2; i <= n; i++) {
    ans[i] = a[ ans[i - 2] ];
  }

  for(int i = 1; i <= n; i++) cout << ans[i] << " ";

  cout << endl;

}