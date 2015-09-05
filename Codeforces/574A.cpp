#include <bits/stdc++.h>

using namespace std;

int a[123];

int main() {
  int n;
  cin >> n;
  int has;
  cin >> has;
  n--;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  int ans = 0;
  while(has <= a[n - 1]) {
    has++;
    a[n - 1]--;
    sort(a, a + n);
    ans++;
  }
  cout << ans << endl;
  return 0;
}