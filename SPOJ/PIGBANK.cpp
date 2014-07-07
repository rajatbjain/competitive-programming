#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {

        int e, f, n, p, w, W;
        const int inf = 999999;
        cin >> e >> f >> n;
        W = f-e;
        int arr[W+1];
        for(int i=1; i<=W; i++) {
            arr[i] = inf;
        }
        arr[0] = 0;

        for(int i=0; i<n; i++) {
            cin >> p >> w;
            for(int j=0; j+w<=W; j++) {
                if(arr[j] != inf && arr[j+w] > arr[j]+p) {
                    arr[j+w] = arr[j]+p;
                }
            }
        }

        if(arr[W] != inf) cout << "The minimum amount of money in the piggy-bank is " << arr[W] << "."<< endl;
        else cout << "This is impossible.\n";
    }
}