#include <cstdio>
#include <algorithm>
#include <map>
typedef long long ll;
using namespace std;

map<int, ll> vc;

ll compute(ll a)
{
    if (a==0)
        return 0;

    if (vc[a] != 0)
        return vc[a];

    ll sum = compute(a/2)+compute(a/3)+compute(a/4);

    vc[a] = max(sum, a);

    return vc[a];


}

int main()
{
    ll n;
    while(scanf("%lld",&n) == 1)
    {
        printf("%lld\n",compute(n));
    }

}
