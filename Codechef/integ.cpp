#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    long long n, X, i, cost=0, total=0, k=1, arr[100010], sum=0;
	cin >> n;
	for(i=0; i<n; i++)
	{
		cin >> X;
		if(X < 0)
		{
			total += -X;
			arr[k++] = -X;
		}
	}

	cin >> cost;
	if(k-1 <= cost)
	{
		cout << total;
		return 0;
	}
	else
	{
		sort(arr,arr+k);
		long long count=0;
		for(i=k-1; count != cost ; i--,count++)
		{
			sum += arr[i];
		}
	}
	cout << sum << endl;

}
