#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <functional>
#include <utility>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

typedef long long int64;
#define SD(n) scanf("%d",&n)
#define SF(n) scanf("%f",&n)
#define SLL(n) scanf("%lld",&n)
#define PF(n) printf("%d",n)

using namespace std;

int main()
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
        int n;
        scanf("%d",&n);
        int64 num, big=0;
        for (int i=0; i<n; i++)
        {
            SLL(num);

            num += i;

            if (big < num)
            {
                big = num; // PF(big);
            }
        }

        printf("%lld",big);

        if (testcase)
            printf("\n");
	}
	return 0;
}
