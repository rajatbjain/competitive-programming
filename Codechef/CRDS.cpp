#include <iostream>
#include <cstdio>
using namespace std;
long long a[1000002]={0};
int main() {
    //precomputation
    for(int i=1; i<=1000000; i++) {
        a[i] = i + a[i-1];
    }

    int T;
    cin >> T;
    while(T--) {
        long long N, sum=0;
        cin >> N;

        //Use formula instead!
        /*for(int i=N; i>=1; i--) {
            sum = sum + i;
        }*/

        sum = (N * (N+1))/2;

//      cout << (sum*2) << " " << a[N-1] << endl;
        long long tot = (sum*2 + a[N-1])%1000007;
        cout << tot << endl;
    }
}