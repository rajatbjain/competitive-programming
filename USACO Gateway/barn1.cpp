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
#include <ctime>
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

#define INPUT(file) freopen(file, "r", stdin)
#define OUTPUT(file) freopen(file, "w", stdout)

bool cmpre(int a, int b) {
  if(a < b) return false;
  else return true;
}

int main() {
  INPUT("barn1.in");
  OUTPUT("barn1.out");
  int m, s, c;
  cin >> m >> s >> c;
  vector<int> stall(s + 1, 0);
  for(int i = 0 ; i < c; i++) {
    int foo;
    cin >> foo;
    stall[foo] = 1;
  }
  
  int ul, ll, k;
  for(k = 1; !stall[k] ; k++);
  ll = k;
  for(k = s; !stall[k]; k--);
  ul = k;
  vector<int> ff;
  int un = (ll - 0) + (s - ul);
  
  for(int i = ll + 1; i < ul; i++) {
    while(stall[i] && i < ul) i++;
    int n = 0;
    while(!stall[i] && i < ul) n++, i++;
    ff.push_back(n);
  }
  sort(ff.begin(), ff.end(), cmpre);

  for(int i = 0; i < m - 1 && i < ff.size(); i++) un += ff[i];
  cout << s - un + 1<< endl;
  return 0;
}