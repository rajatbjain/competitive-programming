#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>

#define REP(i,N)		for(long long i = 0; i < N; i++)
#define MAX 100000
#define MOD 1000000007
#define gc getchar()
#define pc putchar()
using namespace std;

typedef long long LL;
typedef long double LD;

inline void read(LL & n)
{
	n = 0;
	char ch = gc;		int sign = 1;
	while(ch < '0' || ch > '9')
	{if(ch == '-')	sign = -1;ch = gc;}
	while(ch >= '0' && ch <= '9')
	{
		n = n*10 + ch - '0';
		ch = gc;
	}
	n  *=  sign;
}

inline LL binarySearch(LL * arr, LL value, LL size)
{
	LL lo = 0, hi = size-1, mid;
	while(lo <= hi)
	{
		mid = lo + (hi - lo)/2;
		if(arr[mid] == value)		return mid;
		else if(arr[mid] < value)	lo = mid + 1;
		else						hi = mid - 1;
	}
	return -1;
}

int check(LL & n, LL & K, LL & P)
{
	read(n),	read(K),	read(P);

	LL end;
	LL * partChef = (LL *)malloc(K*sizeof(LL));
	LL * partKid = (LL *)malloc(P*sizeof(LL));

	REP(i,K)
		read(partChef[i]),	read(end);

	REP(i,P)
		read(partKid[i]),	read(end);

	if(K >= P){

		sort(partChef,partChef+K);
		sort(partKid,partKid+P);

		int flag = 1;
		LL code;
		REP(i,P)
		{
			code = binarySearch(partChef, partKid[i], K);
			if(code == -1)
			{
				flag = 0;
				break;
			}
		}

		free(partChef),free(partKid);

		if(flag == 0)
			return 0;
		else
			return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
    freopen("input.txt","r", stdin);
    LL t;
    read(t);
    while(t--)
    {
        LL N, K, P;

        read(N); read(K); read(P);

        /*vector<LL> a;
        LL temp, temp2;
        bool flag;
        REP(i,K)
        {
            read(temp); read(temp2);
            a.push_back(temp);
        }

        //sort(a.begin(), a.end());

        //for(int i=0; i<a.size(); i++)
        //    cout << a[i] << endl;

        REP(i,P)
        {
            read(temp); read(temp2);

            if(find(a.begin(), a.end(), temp)!=a.end())
                flag=1;

            else
            {
                flag=0; break;
            }
        }*/

        bool flag = check(N, K, P);

        if(flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}