#include <bits/stdc++.h>

using namespace std;

const int N = 100010;
int a[N];
int f[N], s[N];

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }
  for(int i = 0; i < n; i++) {
    f[i] = s[i] = 1;
  }  
  for(int i = 1; i < n; i++) {
    if(a[i] > a[i - 1]) f[i] = f[i - 1] + 1;
  }
  for(int i = n - 2; i >= 0; i--) {
    if(a[i + 1] > a[i]) s[i] = s[i + 1] + 1;
  }
  int ans = 1;
  for(int i = 0; i < n; i++) {
    if(i != 0 && i != n - 1) {
      if(a[i + 1] - a[i - 1] > 1) {
        ans = max(ans, f[i - 1] + s[i + 1] + 1);
      }
      else ans = max(ans, max(f[i - 1] + 1, s[i + 1] + 1));
    }
    else if(i) ans = max(ans, f[i - 1] + 1);
    else if(i < n - 1) ans = max(ans, s[i + 1] + 1);
  }
  cout << ans << endl;
  return 0;
}