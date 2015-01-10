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
  int a, b, c;
  cin >> a >> b >> c;
  int A = a + b + c;
  int B = a + (b * c);
  int C = (a * b) + c;
  int D = a * (b + c);
  int E = (a + b) * c;
  int F = (a * b * c);

  cout << max(A, max(B, max(C, max(D, max(E, F)))));
  
}