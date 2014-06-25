#include <iostream>
#include <cstdio>
#include <algorithm>
#define INF 100000
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    
    int h, w;
        cin >> h >> w;
        int dp[123][123];
        for(int i=1; i<=h; i++)
        {
            dp[i][0] = dp[i][h+1] = INF;
            for(int j=1; j<=w; j++)
            {
                cin >> dp[i][j];
                dp[i][j] = min(dp[i][j]+dp[i-1][j-1], min(dp[i][j]+dp[i-1][j], dp[i][j]+dp[i-1][j+1]));
            }
        }

        int ans = INF;
        for(int i=0; i<w+1; i++)
        {
            ans = min(ans, dp[h][i]);
        }

        cout << ans << endl;

    return 0;
}
