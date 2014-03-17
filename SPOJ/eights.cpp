#include <cstdio>
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll number;
        scanf("%lld",&number);
        ll result;
        result=192+(number-1)*250;
        printf("%lld\n",result);
    }
}
