#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long a;
        cin >> a;
        cout << a*(a+2)*(a*2+1)/8 << endl;
    }
}