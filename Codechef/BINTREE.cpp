#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll a, b, levela=0, levelb=0, res=0;
        scanf("%lld%lld",&a,&b);
        vector<ll> path1; vector<ll> path2;

        ll temp1=a, temp2=b;

        path1.push_back(temp1);
        path2.push_back(temp2);

        while(temp1 != 1)
        {
            temp1=temp1/2;
            levela++;
            path1.push_back(temp1);
        }
        //cout << "levela "<< levela << endl;
        while(temp2 != 1)
        {
            temp2= temp2/2;
            ++levelb;
            path2.push_back(temp2);
        }
        //cout << "levelb " << levelb << endl;

        ll size1=path1.size(); ll size2=path2.size();
        //cout << path1[0] << " " << path2[0] << endl;
        ll same=1;

        ll small = min(size1, size2);
        for (ll i=size1-1, j=size2-1; small>=1 ;j--, i--, small--)
        {
            //cout << "i "<< i << " j " << j << endl;
            //cout << path1[i] << " path " <<path2[j] << endl;
            if (path1[i] == path2[j])
                same = path1[i];
            else
                break;

        }
        //cout << "same is " << same << endl;

        ll samelevel=0;

        while(same!=1)
        {
            same=same/2;
            samelevel++;
        }
        res = (levela + levelb) - (2*samelevel);

        printf("%lld\n",res);
    }
}