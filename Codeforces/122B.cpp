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

int main() {
  string s;
  cin >> s;
  int four = 0, seven = 0;
  for(int i = 0; i < (int) s.size(); i++) {
    if(s[i] == '4') four++;
    if(s[i] == '7') seven++;
  }     
  if(four == 0 && seven == 0) puts("-1");
  else if(four >= seven) puts("4");
  else puts("7");
}