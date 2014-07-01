#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, sum=0;
        cin >> N;
        int a[N];
        for(int i=0; i!=N; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        sort(a, a+N);

        cout << sum - a[0]*N << endl;
    }
}