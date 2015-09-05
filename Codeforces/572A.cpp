#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int a[N], b[N];

int main() {
  int na, nb;
  cin >> na >> nb;
  int k, m;
  cin >> k >> m;
  for(int i = 0; i < na; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < nb; i++) {
    cin >> b[i];
  }
  k--;
  for(int i = 0; i < nb; i++) {
    if(b[i] > a[k]) {
      if(nb - i >= m) {
        puts("YES");
        return 0;
      }
    }
  }
  puts("NO");
}