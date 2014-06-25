#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n, k, s;
    cin >> n >> k >> s;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a, a+n); int cnt=1, sum=0;

    int screws = k*s;

    for(int i=n-1; i>=0; i--) {

        sum += a[i];

        if (sum >= screws) {
            printf("%d\n",cnt);
            break;
        }
        else
            cnt++;



    }

}