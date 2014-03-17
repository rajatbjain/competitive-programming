#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
        long long n;
        scanf("%I64d",&n);
        long long zero=0, two=0, one=0, result=0, a[n];
        for (int i=0; i< n; i++)
        {
            scanf("%I64d",&a[i]);

            if (a[i] == 0)
                zero++;
            else if (a[i] == 1)
                one++;
            else if (a[i] == 2)
                two++;
        }

        n=n-zero-one;

        if (two == 0)
            two = 1;

        result = (n*(n-1) - two*(two-1));
        result/=2;
        printf("%d\n",result);
	}

	return 0;
}
