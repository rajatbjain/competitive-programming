#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int N, ul, sum=0;
        scanf("%d",&N);
        ul=N/2;
        for (int i=1; i<=ul; i++)
        {
            if(N%i == 0)
                sum=sum+i;
        }
        printf("%d\n",sum);
    }
}