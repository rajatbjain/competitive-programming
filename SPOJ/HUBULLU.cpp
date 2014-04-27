#include <iostream>
using namespace std;
typedef long long ll;

int main(void)
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b == 1 )
            cout << "Pagfloyd wins.\n";
        if (b == 0)
            cout << "Airborne wins.\n";
    }
}