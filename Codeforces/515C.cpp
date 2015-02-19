#include <cstdio>
#include <bitset>
#include <cassert>
#include <list>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <memory.h>
#include <ctime>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <iomanip>
#include <utility>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  string replace[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
  int l; cin >> l;
  string n;
  cin >> n;
  string ans;
  for(int i = 0; i < l; i++) {
    ans += replace[ n[i] - '0' ];    
  }  
  sort(ans.rbegin(), ans.rend());
  cout << ans << endl;
}