#include <iostream>
#include <cstdio>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str; stack<char> stk;
    cin >> str;

    for(int i=0, size=str.size(); i<size; i++)
    {
        if(str[i] == '+')
        {
            if(stk.empty())
            {
                stk.push('+');
            }
            else
            {
                if(stk.top() == '+')
                {
                    stk.pop();
                }
                else
                {
                    stk.push('+');
                }
            }
        }

        else if(str[i] == '-')
        {
            if(stk.empty())
            {
                stk.push('-');
            }
            else
            {
                if(stk.top() == '-')
                {
                    stk.pop();
                }
                else
                {
                    stk.push('-');
                }
            }
        }

    }

    if(stk.empty())
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}