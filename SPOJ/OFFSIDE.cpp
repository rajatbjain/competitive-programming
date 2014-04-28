#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
    //freopen("in.txt","r",stdin);

    int A,D,a[12],d[12];
    while(1)
    {
        cin >> A >> D;

        if(A==0 && D==0)
            break;

        for(int i=0;i<A;i++)
            cin>>a[i];

        for(int i=0;i<D;i++)
            cin>>d[i];

        sort(a,a+A);
        sort(d,d+D);

        if(a[0]<d[1])
        {
           cout<<"Y" << endl;
           continue;
        }
        else
        {
           cout<<"N" << endl;
        }
    }

}