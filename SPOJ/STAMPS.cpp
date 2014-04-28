#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long int64;
int main()
{
    //freopen("in.txt","r",stdin);
    int T, Z=0;
    cin>>T;
    while(T--)
    {
        int64 want; int n;
        cin >> want >> n;
        int give[n];

        for(int i=0;i<n;i++)
        {
            cin >> give[i];
        }

        if(n==1 && want==1)
        {
            cout << "Scenario #" << ++Z << ":\n" << 1 << endl;
            continue;
        }

        sort(give, give+n);
        reverse(give, give+n);

        int64 sum=0; int count=0; bool ok=true;

        for(int i=0;;i++)
        {
            if(sum>=want)
                break;
            //cout << "Sum " << sum << " Want " << want << endl;
            sum+=give[i];
            //cout << sum << " " << want << endl;
            ++count;
            if(i==n-1)
                {ok=false; break;}
        }
        ++Z;

        if(ok && Z != T)
            cout << "Scenario #" << Z << ":\n" << count << endl;
        else if (ok && Z == T)
            cout << "Scenario #" << Z << ":\n" << count;
        else if (!ok && Z != T)
            cout << "Scenario #" << Z << ":\nimpossible" << endl;
        else if (!ok && Z == T)
            cout << "Scenario #" << Z << ":\nimpossible";

    }

}
