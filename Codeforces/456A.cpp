#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>  
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

#define d(b) cout << #b << " " << b << endl;

int main() {
   int n;
   cin >> n;
   vector< pair<int, int> > v;  
   for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >>b;
    v.push_back(make_pair(a,b));
   }

   sort(v.begin(), v.end());
   
   bool ok = false;
   
   for(int i = 1; i < n; i++) {
    if(v[i-1].first < v[i].first && v[i-1].second > v[i].second) {
      ok = true;
      break;
    }
   }

   if(ok) cout << "Happy Alex\n";
   else cout << "Poor Alex\n";

}