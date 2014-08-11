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
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		
    if(s[i] == '1') {
      int cnt = 0;
      int j = i;
      while(j < s.size()) {
        if(s[j] == '0') {
          break;
        }
        j++;
        cnt++;
      }
      if(cnt >= 7) {
        cout << "YES\n";
        return 0;
      }
    }
    if (s[i] == '0') {
      int cnt = 0;
      int j = i;
      while(j < s.size()) {
        if(s[j] == '1') {
          break;
        }
        j++;
        cnt++;
      }

      if(cnt >= 7) {
        cout << "YES\n";
        return 0;
      }
    }
	} 

  cout << "NO\n";
  return 0;
}