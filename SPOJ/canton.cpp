#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll number, index=0, i=0, ul, dl;
        bool isOdd=false;
        cin >> number;

        while(1)
        {
            index = index + i;

            if (index>=number)
                break;

            i++;
        }

        ul= number-(index-i);
        dl = i+1;
        if (i%2 == 0)
            cout << "TERM " << number << " IS " << ul << "/" << dl-ul << endl;

        else
            cout << "TERM " << number << " IS " << dl-ul << "/" << ul << endl;


    }
}

/*        cout << upper << " " << lower << endl;

        if(isOdd == true)
            for (;j<=upper;j++, ul--, dl++)
                    if(j == number)
                    cout << "TERM " << j << " IS "<<  ul << "/" << dl << endl;
        else
            for (;j<=upper;j++, ul++, dl--)
                    if(j == number)
                    cout << "TERM " << j << " IS "<<  ul << "/" << dl << endl;

*/
