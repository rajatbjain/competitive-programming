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
  int n, sum = 0;
  cin >> n;

  for(int i = 0; i < n; i++) {
    int a; 
    cin >> a;
    sum += (a);
  }

  printf("%.12f\n", (((double)sum / 100) / ((double)n)) * 100);



} 