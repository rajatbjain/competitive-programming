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
int color[100010];  

void choose(int x, int b, int c) {
  if(x == 1) {
    color[b] = 2;
    color[c] = 3;
  }
  if(x == 2) {
    color[b] = 1;
    color[c] = 3;
  }
  if(x == 3) {
    color[b] = 1;
    color[c] = 2;
  }
}

void assign(int a, int b, int c) {
  if(color[a] > 0) {
    choose(color[a], b, c);    
  }
  else if(color[b] > 0) {
    choose(color[b], a, c);
  }
  else if(color[c] > 0){
    choose(color[c], a, b);
  }
  else {
    color[a] = 1;
    color[b] = 2;
    color[c] = 3;
  }
} 

int main() {
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    assign(a, b, c);
  }
  for(int i = 1; i <= n; i++) cout << color[i] << " ";
  cout << endl;
}