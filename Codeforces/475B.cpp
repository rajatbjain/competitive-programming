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

int main(int argc, char* argv[]) {
  if(argc == 2) freopen(argv[1], "r", stdin);

  int n, m;
  cin >> n >> m;
  char a[n], b[m];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  } 
  for(int j = 0; j < m; j++) {
    cin >> b[j];
  }
  bool ok = false;
  if(a[0] == '>' && a[n - 1] == '<' && b[0] == '^' && b[m - 1] == 'v') ok = true;
  if(a[0] == '<' && a[n - 1] == '>' && b[0] == 'v' && b[m - 1] == '^') ok = true;
  puts(ok ? "YES" : "NO");

}