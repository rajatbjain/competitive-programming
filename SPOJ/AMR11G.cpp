#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        bool flag=0;
        string ch;
        cin >> ch;

        for(int i=0; i<ch.size();i++)
        {
            if(ch[i] == 'D')
            {
                flag=1;
            }
        }

        if(flag)
            cout << "You shall not pass!\n";
        else
            cout << "Possible\n";


    }
}