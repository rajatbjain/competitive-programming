#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int test;
    cin >> test;
    int counter = test;
    while(test--)
    {
        int number; string s;

        cin >> number >> s;

        cout << counter-test << " " ;

        for(int i=0; i<s.size(); i++)
        {
            if(i == number-1)
            {
                continue;
            }

            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}