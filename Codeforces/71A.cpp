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
  int n;
  cin >> n;
  while(n--) {
    string a;
    cin >> a;
    if(a.length() <= 10) cout << a << endl;
    else {
      cout << a[0] << a.length()-2 << a[a.length()-1] << endl;
    } 
  }
}