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
#include <ctime>

using namespace std;

#define d(b) cout << #b << " " << b << endl;
vector<bool> seen(5010, 0);
void var_dump(int n) {
  for(int i = 0; i < n; i++) cout << seen[i] << " ";
}

int main() {
  double start_time = clock();
  freopen("input.txt", "r", stdin);
  string s;
  cin >> s;
  int N = s.size();
  long long ans = 0;
  for(int i = 0; i < N - 3; i++) {
    // d(s[i]);
    if(s[i] == 'b' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r') {
      int c = 0;
      int j = i;
      while(j >= 0 && !seen[j]) {
        seen[j] = true;
        c++, j--;
      }
      // d("seen");
      // var_dump(N);
      // d(c);
      int x = (N - (i + 3));
      // d(x);

      ans += c * x;
      // d(ans);
    }
  }

  cout << ans << endl;
  double end_time = clock();
  printf("%.3lf", (end_time - start_time) / CLOCKS_PER_SEC);
}