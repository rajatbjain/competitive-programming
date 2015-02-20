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

long long a[1234567];
long long point[1234567];
long long MAX[1234567], rMAX[1234567];
int n, k;
long long got;
long long sum1, sum2;
const int RED_VAL = 99999999;
pair< int, int > p[2] = {make_pair(RED_VAL, RED_VAL), make_pair(RED_VAL, RED_VAL)};

bool range(int x) {
  if(x >= 0 && x <= n) return true;
  else return false;
}

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; i++) scanf("%I64d", a + i);
  for(int i = 1; i <= n; i++) a[i] += a[i - 1];
  for(int i = 1; i <= n - k + 1; i++) {
    point[i] = a[i + k - 1] - a[i - 1];  
  }
  for(int i = 1; i <= n - k + 1; i++) {
    MAX[i] = max(point[i], MAX[i - 1]);
  }
  for(int i = n - k + 1; i >= 1; i--) {
    rMAX[i] = max(point[i], rMAX[i + 1]);
  }
  for(int i = 1; i <= n - k + 1; i++) {
    if(range(i + 2 * k) && rMAX[i + k] + point[i] > got) {
      got = rMAX[i + k] + point[i];
      sum1 = point[i];
      sum2= rMAX[i + k];
    }  

    if(range(i - k) && MAX[i - k] + point[i] > got) {
      got = point[i] + MAX[i - k];
      sum1 = point[i];
      sum2 = MAX[i - k];
    }
  }
  int i = 1;
  for( ; i <= n - k + 1; i++) if(sum1 == point[i]) {p[0].first = i; break;}
  i += k;
  for( ; i <= n - k + 1; i++) if(sum2 == point[i]) {p[0].second = i; break;}
  i = 1;
  for( ; i <= n - k + 1; i++) if(sum2 == point[i]) {p[1].first = i; break;}
  i += k;
  for( ; i <= n - k + 1; i++) if(sum1 == point[i]) {p[1].second = i; break;}
  if(p[0].first > p[0].second) swap(p[0].first, p[0].second);
  if(p[1].first > p[1].second) swap(p[1].first, p[1].second);
  sort(p, p + 2);
  if(p[0].first == RED_VAL or p[0].second == RED_VAL) swap(p[0], p[1]);
    cout << p[0].first << " " << p[0].second << endl;
  return 0;  
}
