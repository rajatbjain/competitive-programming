#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <map>
typedef long long ll;
using namespace std;

map<long long, long long> dp;

ll square(ll a)
{
   /* if (a == 0)
    {
        dp[a]=0;
        return dp[a];
    }

    else if (a == 1)
    {
        dp[a]=1;
        return dp[a];
    }

    else if (a == 2)
    {
        dp[a]=4;
        return dp[a];
    }

    else if (a == 3)
    {
        dp[a]=9;
        return dp[a];
    }

    else if (a == 4)
    {
        dp[a]=16;
        return dp[a];
    }

    else if (a == 5)
    {
        dp[a]=25;
        return dp[a];
    }

    else if (a == 6)
    {
        dp[a]=36;
        return dp[a];
    }

    else if (a == 7)
    {
        dp[a]=49;
        return dp[a];
    }

    else if (a == 8)
    {
        dp[a]=64;
        return dp[a];
    }

    else if (a == 9)
    {
        dp[a]=81;
        return dp[a];
    }

    else if (a == 10)
    {
        dp[a]=100;
        return dp[a];
    }*/

    if (dp[a] != 0)
    {
        return dp[a];
    }

    long long b=a/2;

    if (a%2==0)
    {
        dp[a]= 4*square(b);//+square(b)+(2*b*b);
        return dp[a];
    }

    else
    {
        dp[a]=square(b)+square(b+1)+(2*b*(b+1));
        return dp[a];
    }
}

int t,a,b,c,d;
ll n,x,y;

int main()
{
    for (int i=0; i<=100; i++)
    {
        dp[i]=i*i;
    }

    scanf("%d",&t);
    while(t--)
    {
        n=0;x=0;y=0;
        scanf("%I64d %d %d %d %d",&n,&a,&b,&c,&d);
        ll *s=(ll *) malloc(sizeof(ll)*n);
        s[0]=x=d;
        for (ll i=1; i<n; i++)
        {
           s[i]=((a*square(s[i-1]))+(b*s[i-1])+c)%1000000;

            if (i%2==0)
                x+=s[i];

            else
                y+=s[i];

        }

		printf("%I64d\n",abs(x-y));
    }
}
