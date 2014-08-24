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
#include <ctime>
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

const long long N = 1000000000ll;

inline bool bar(long long foo) {
  if(foo > 0 && foo < N) return true;
  else return false;
}

long long s(int i) {
  long long sum = 0;
  while(i > 0) {
    int m = i % 10;
    i /= 10;
    sum += m;
  }
  return sum;
} 


inline long long power(long long x, long long y){
  if(y == 1) return x;
  if(y == 2) return x * x;
  if(y == 3) return x * x * x;
  if(y == 4) return x * x * x * x;
  if(y == 5) return x * x * x * x * x;
}

int main() {  
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  vector<long long> v;
  for(int i = 1; i <= 100; i++) {
    long long foo = (b * (power(i, a)))+ c;
    if(!bar(foo)) continue;
    // cout << foo <<" " << s(foo) <<  " "  << i <<  endl;

    long long dd = s(foo);
    if(dd == i) {
      // cout << i << endl;
      v.push_back(foo);      
    }
  }

  v.erase(unique(v.begin(), v.end()), v.end());
  sort(v.begin(), v.end());

  cout << v.size() << endl;

  for(int i = 0 ; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  return 0; 
}