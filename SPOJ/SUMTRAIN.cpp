#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int itr, sum=0;
        int dp[101][101]={0};
        scanf("%d",&itr);

        for (int i=1; i<=itr; i++)
            for (int j=1; j<=i; j++)
            {
                scanf("%d",&dp[i][j]);
                if(i==itr){
					dp[i][j]=max(dp[i][j-1],max(dp[i][j]+dp[i-1][j],dp[i][j]+dp[i-1][j-1]));
				}
				else{
					dp[i][j]=max(dp[i][j]+dp[i-1][j],dp[i][j]+dp[i-1][j-1]);
				}
            }


            printf("%d\n",dp[itr][itr]);



    }
}