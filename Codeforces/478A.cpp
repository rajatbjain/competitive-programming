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
  long long sum = 0;
  for(int i = 0; i < 5; i++) {
    long long foo;
    cin >> foo;
    sum += foo;
  } 
  if(sum < 5) cout << "-1" << endl;
  else if(sum % 5 == 0) cout << sum / 5 << endl;
  else cout << "-1" << endl; 
}