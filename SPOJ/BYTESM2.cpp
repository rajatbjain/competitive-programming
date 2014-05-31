#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int max3(int a, int b, int c)
{
    return (a>b?(a>c?a:c):(b>c?b:c));
}

int main()
{
    //freopen("input.txt","r",stdin);
    int test;
    cin>>test;
    while(test--)
    {
        int h, w;
        cin >> h >> w;
        int dp[111][111]={0};
        for(int i=1; i<=h; i++)
        {
            for(int j=1; j<=w; j++)
            {
                cin >> dp[i][j];
                dp[i][j] = max3(dp[i][j]+dp[i-1][j-1], dp[i][j]+dp[i-1][j], dp[i][j]+dp[i-1][j+1]);
            }
        }

        for(int i=2; i<w+1; i++)
        {
            dp[h][i] = max(dp[h][i-1], dp[h][i]);
        }

        cout << dp[h][w] << endl;
    }
}
