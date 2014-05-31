#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        //printf("\n");
        long long int a, b, max1=0, max2=0, temp;
        scanf("%lld %lld", &a, &b);

        for(int i=0; i<a; i++)
        {
            scanf("%lld",&temp);
            max1=max(max1, temp);
        }

        for(int i=0; i<b; i++)
        {
            scanf("%lld",&temp);
            max2=max(max2, temp);
        }

        if(max1 >= max2)
        {
            printf("Godzilla\n");
        }

        else
        {
            printf("MechaGodzilla\n");
        }
    }
}