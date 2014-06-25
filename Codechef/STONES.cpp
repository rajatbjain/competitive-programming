#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll N, K, maxN=INT_MIN, maxN2=INT_MIN;
    bool flag;

    cin >> N >> K;

    ll arr[N];

    if(K==0)
    {
        for(ll i=0; i<N; i++)
        {
            cin >> arr[i];
            cout << arr[i] << " ";
        }
    }

    else
    {
        if(K%2 == 0)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }

        for(ll i=0;i<N;i++)
        {
            cin >> arr[i];
            maxN = max(maxN, arr[i]);
        }

        if(flag==0)
        {
            for(ll i=0;i<N;i++)
            {
                arr[i] = maxN - arr[i];
                cout << arr[i] << " ";
            }
        }

        else if ( flag == 1)
        {
            for(ll i=0;i<N;i++)
            {
                arr[i] = maxN - arr[i];

                maxN2 = max(maxN2, arr[i]);
            }

            for(ll i=0;i<N;i++)
            {
                arr[i] = maxN2- arr[i];

                cout << arr[i] << " ";
            }
        }
    }
}