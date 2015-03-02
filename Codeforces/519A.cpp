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

int w, b;

int weight(char ch) {
  if(ch == 'q' || ch == 'Q') return 9;
  if(ch == 'R' || ch == 'r') return 5;
  if(ch == 'B' || ch == 'b') return 3;
  if(ch == 'N' || ch == 'n') return 3;
  if(ch == 'P' || ch == 'p') return 1;
  if(ch == 'K' || ch == 'k') return 0;
  assert(false);
}

int main() {
  for(int i = 1; i <= 8; i++) {
    for(int j = 1; j <= 8; j++) {
      char ch;
      cin >> ch;
      if('a' <= ch && ch <= 'z') {
        b += weight(ch);
      }
      else if('A' <= ch && ch <= 'Z') {
        w += weight(ch);
      }
    }
  }  
  if(w > b) cout << "White\n";
  else if(w < b) cout << "Black\n";
  else cout << "Draw\n";
  return 0;
}