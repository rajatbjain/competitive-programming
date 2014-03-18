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

typedef unsigned long long uint64;
typedef long long int64;

#define SD(n) scanf("%d",&n)
#define SF(n) scanf("%f",&n)
#define SLL(n) scanf("%lld",&n)
#define PD(n) printf("%d\n",n)
using namespace std;
#define MAX 10000001
int main()
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
        string str;
        uint64 cnt=0;
        cin>>str;

        for (int i=0, len=str.length(); i<len; i++)
        {
            if ((str[i]-'0' == 4) || (str[i]-'0' == 7));

            else if ((str[i]-'0' >= '0')|| (str[i]-'0' <= '9'))
                {cnt+=1;}
        }

        printf("%d\n",cnt);

	}
	return 0;
}
