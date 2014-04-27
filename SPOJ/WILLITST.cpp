#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll number, flag=0;
    cin >> number;

    while(number>1)
    {
        if(number%2 == 0)
        {
            number/=2;
        }
        else
            {flag=1;break;}
    }

    if(number % 3 == 0)
        flag=1;

    if(!flag)
    {
        cout << "TAK\n";
    }
    else
        cout << "NIE\n";
}