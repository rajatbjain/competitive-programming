#include <bits/stdc++.h>

using namespace std;

long long x[100010], h[100010];

int main() {
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x[i] >> h[i];
  }
  int cnt = 0;
  x[0] = -1e12;
  x[n + 1] = 1e12;
  for (int i = 1; i <= n; i++) {
    if (x[i] - h[i] > x[i - 1]) {
      cnt++;
    }
    else if (x[i] + h[i] < x[i + 1]) {
      cnt++;
      x[i] = x[i] + h[i];
    }
  }
  cout << cnt << endl;
  return 0;
}