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
  string a = "AJKEQSLOBSROFGZ", d;
  string b = "OVGURWZLWVLUXTH", c;
  // cin >> a >> b >> c;
  for(int i = 0; i < a.size(); i++) {
    for(int j = 0; j < b.size(); j++) {
      if(b[i] == a[j]) d += b[i];
    }
  } 
  cout << d << endl;
}