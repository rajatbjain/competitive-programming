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

bool vowel(char c) {
  if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'y' || c == 'Y') {
    return true;
  }

  return false;
}

char tolower(char c) {
  if(c >= 'a' && c <= 'z') return c;
  else {
    return(c - 'A' + 'a');
  }
}

int main() {  
  string a;
  vector<char> b;
  cin >> a;
  for(int i = 0; i < a.size(); i++) {
    if(!vowel(a[i])) {
      char c = tolower(a[i]);
      b.push_back('.');
      b.push_back(c);
    }
    else continue;
  }

  for(int i = 0; i < b.size(); i++) {
    cout << b[i];
  }
  cout << "\n";
  return 0;
}