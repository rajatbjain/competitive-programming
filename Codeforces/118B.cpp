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
  
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      cout << "  ";
    }
    for(int j = 0; j < i; j++) {
      cout << j << " ";
    }
    for(int j = i; j > 0; j--) {
      cout << j << " ";
    }
    cout << "0\n";
  }

  for(int i = n; i >= 0; i--) {
    for(int j = i; j < n; j++) cout << "  ";
    for(int j = 0; j < i; j++) cout << j << " ";
    for(int j = i; j > 0; j--) cout << j << " ";
    cout << "0\n";
  }

}