#include <bits/stdc++.h>

using namespace std;

long long a[1234567];

int main() {
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  long long cur = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (cur <= a[i]) {
      ans++;
      cur += a[i];
    }
  }
  cout << ans << endl;
  return 0;
}