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
  string a, b;
  while(getline(cin, a)) {
    int A[26]={0}, B[26] = {0};
    getline(cin, b);
    for(int i = 0 ; i < a.size(); i++) {
      A[a[i] - 'a']++;
    }
    for(int i = 0; i < b.size(); i++) {
      B[b[i] - 'a']++;;
    }

    for(int i = 0; i < 26; i++) {
      if(A[i] != 0 && B[i] != 0) {
        int v = min(A[i], B[i]);
        char c = i + 'a';
        while(v--) {
          cout << c ;
        }
      }
    }
    cout << endl;
  } 
}