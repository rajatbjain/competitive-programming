#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    long long int a, b, ans=0;
    cin >> a >> b;

    while(b) {
        ans = ans + (long long int) a/b;
        a %= b;
        swap(a,b);
    }

    cout << ans << endl;
}