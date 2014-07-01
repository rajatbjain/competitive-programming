#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
const ll m = 1000000007;

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        ll a[3];
        scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
        sort(a,a+3);

        cout << (a[0])%m * ((a[1]-1)%m)%m * ((a[2]-2)%m)%m << endl;
    }

    return 0;
}
