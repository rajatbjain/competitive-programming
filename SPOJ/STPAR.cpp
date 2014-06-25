#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <stack>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    while(1)
    {
        int n;
        cin >> n;
        if(n==0)
            break;

        int flag=1,number,want=1;
        vector<int> givenVector; stack<int> interim;

        for(int i=0;i<n;i++)
        {
            cin >> number;
            givenVector.push_back(number);
        }
        for(int i=0;i<n;i++)
        {
            while(!interim.empty() && interim.top() == want)
            {
                want++;
                interim.pop();
            }

            if(givenVector[i]==want)
            {
                want++;
            }

            else if (!interim.empty() && interim.top() < givenVector[i]) {
                flag = 0;
                break;
            }

            else
            {
                interim.push(givenVector[i]);
            }

        }
        
        if(flag)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
