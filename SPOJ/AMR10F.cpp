#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, A, D;
        cin >> N >> A >> D;
        int lastTerm = A + (N-1)*D;
        int tot = ( N * ( A + lastTerm ) ) / 2;
        cout << tot << endl;
    }

}