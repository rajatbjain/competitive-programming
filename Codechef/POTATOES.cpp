#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int input)
{
    bool res = true;

    if(input == 2)
        return true;

    if(input%2 == 0 || input <= 1)
        return false;
    else
    {
        for(int i=3, sq=sqrt(input); i<=sq && res == true; i++)
            if(input%i == 0)
                return false;
    }
return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x ,y, res=0;
        cin >> x >> y;

        int temp = x+y+1;
        int sum = x+y;


       for (;;temp++)
	    if(isPrime(temp)){
            res = temp-sum;
            break;
	    }

        cout << res << endl;

    }

}