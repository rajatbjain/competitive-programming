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

pair<int, int> days[123];

int main() {
  int d, total, tt = 0, c = 0;
  cin >> d >> total;

  for(int i = 0; i < d; i++) {
    cin >> days[i].first >> days[i].second;
    tt += days[i].first;
    c += days[i].second;
  }

  if(total > c || total < tt) {
    puts("NO");
    return 0;
  }

  for( ; tt < total; ) {
    for(int i = 0; i < d && tt < total; i++) {
      if(days[i].first < days[i].second) {
        days[i].first++;
        tt++;
      }
    }
  }  
  cout << "YES\n";
  for(int i = 0; i < d; i++) {
    cout << days[i].first << " ";
  }
  cout << endl;
}