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

int cnvrt(char a) {
  if(a == 'a') return 1;
  if(a == 'b') return 2;
  if(a == 'c') return 3;
  if(a == 'd') return 4;
  if(a == 'e') return 5;
  if(a == 'f') return 6;
  if(a == 'g') return 7;
  if(a == 'h') return 8;
}

int dist[9][9];

void bfs(pair<int, int> a, pair<int, int>b) {

}


int main() {
  char a1, a2, b1, b2;
  cin >> a1 >> a2 >> b1 >> b2;
  pair<int, int> A(cnvrt(a1), a2-'0'), B(cnvrt(b1), b2-'0');
  bfs(A, B);
}