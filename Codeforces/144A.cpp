#include <iostream>
#include <cstdio>
#define debug(n) cout << #n << " "  << n << endl;
using namespace std;

int main() {
    int n, num, mx, mn, mx_pos, mn_pos, ans=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> num;
        if(i!=0) {
            if(num > mx) {
                mx = num;
                mx_pos = i+1;
            }
            if(num <= mn){
                mn = num;
                mn_pos = i+1;
            }
        }
        else {
            mx = num;
            mx_pos = i+1;
            mn = num;
            mn_pos = i+1;
        }
    }

    ans = n + mx_pos - 1 - mn_pos;
    if(mx_pos > mn_pos) ans--;

    cout << ans << endl;
}