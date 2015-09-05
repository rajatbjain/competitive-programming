#include <bits/stdc++.h>

using namespace std;

int a[123456];

int decompose(int x) {
  if(x % 2 == 0) return decompose(x / 2);
  else if(x % 3 == 0) return decompose(x / 3);
  else return x;
}

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    a[i] = decompose(a[i]);
  }
  // for(int i = 0; i < n; i++) cout << a[i] << " ";
  //   cout << endl;
  for(int i = 1; i < n; i++) {
    if(a[i - 1] == a[i]) continue;
    else {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}