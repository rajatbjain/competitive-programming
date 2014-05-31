#include <iostream>
using namespace std;
int main()
{
	int t, sum=0;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
        if(num>0)
            sum+=num;
	}
	cout<<sum<<endl;
}