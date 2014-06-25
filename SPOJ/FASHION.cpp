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

using namespace std;

int main()
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
		int n;
		scanf("%d",&n);
		int men[n], women[n];
		for (int i=0; i<n; i++)
        {
            scanf("%d",&men[i]);
        }

        for (int i=0; i<n; i++)
        {
            scanf("%d",&women[i]);
        }

        sort(men, men+n); sort(women, women+n);
        int sum=0;
        for (int i=0; i<n; i++)
        {
            sum = sum + men[i]*women[i];
        }

        printf("%d\n",sum);
	}
	return 0;
}
