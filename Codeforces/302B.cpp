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

int n, m;
struct block{
  int id;
  int start;
  int stop;
} a[100010];

int b[100010];

int main() {
  scanf("%d %d", &n, &m);
  int sum = 0;
  for(int i = 0; i < n; i++) {
    int foo, bar;
    scanf("%d %d", &foo, &bar);
    a[i].id = i + 1;
    a[i].start = sum;
    a[i].stop = sum += foo * bar;

  }
  for(int i = 0; i < m; i++) {
    scanf("%d", b + i);
  }
  for(int i = 0, j = 0; i < n && j < m; ) {
    if(b[j] >= a[i].start && b[j] <= a[i].stop) {
      cout << a[i].id << endl;
      j++;
    }
    else if(b[j] > a[i].stop) i++;
  }
}