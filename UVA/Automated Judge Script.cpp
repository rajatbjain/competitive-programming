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
  // freopen("input.txt", "r", stdin);
  int run = 0;
  while(1) {
    int n;
    scanf("%d", &n);
    if(n == 0) break;
    string a, b;

    getchar();
    for(int i = 0; i < n; i++) {
      string s;
      getline(cin, s);
      a += s + '\n';
    }
    // cout << "a " << a << endl;
    int m; scanf("%d",&m);
    getchar();
    for(int i = 0; i < m; i++) {
      string s;
      getline(cin, s);
      b += s + '\n';
    }
    // cout << "b " << b << endl;
    bool ac = true, pe = false;

    if(a != b) ac = false; 

    string sa, sb;
    for(int i = 0; i < a.size(); i++) {
      if(isdigit(a[i])) sa += a[i];
    }
    for(int i = 0; i < b.size(); i++) {
      if(isdigit(b[i])) sb += b[i];
    } 
    if(sa == sb) pe = true;

    printf("Run #%d: ",++run);
    if(ac) printf("Accepted\n");
    else if(!ac && pe) printf("Presentation Error\n");
    else printf("Wrong Answer\n");

  }
}