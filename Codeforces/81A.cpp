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

int main() {
   stack<char> s;
   char c = getchar();
   s.push(c);
   while((c = getchar()) != EOF) {
    if(!s.empty()) {
      if(s.top() == c) s.pop();
      else s.push(c);
    } 
    else s.push(c);
   }
   vector<char> v;
   while(!s.empty()) {
    v.push_back(s.top());
    s.pop();
   }
   for(int i = v.size()-1; i >= 0; i--) {
    cout << v[i];
   }
   cout << endl;
}