#include <iostream>
#include <cstdio>

using namespace std;

int main()  {

    int t;
    cin >> t;
    while(t--) {
        long long x, y, s;
        cin >> x >> y >> s;
        long long n = (s*2) / (x+y);
        long long d = (y-x) / (n-5);
        long long a =  x-(2*d);

        cout << n << endl;

        for(long long i=0; i<n; i++) {
            cout << a << " ";
            a = a + d;
        }
        cout << "\n";
    }

}