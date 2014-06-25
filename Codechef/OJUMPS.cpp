#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int N;

    cin >> N;

    while(N>=0)
    {
        if(N > 6)
        {
            N%=6;
        }
        else
        {
            if( N == 6 || N == 3 || N == 1 || N == 0)
                {
                    cout << "yes\n";
                    break;
                }
            else
                {
                    cout << "no\n";
                    break;
                }
        }
    }

}