#include<iostream>
using namespace std;
int main()
{
    int t, n;
    long long sum, res, ans;
    cin>>t;
    while(t--)
    {
      cin>>n;
	  ans=0;

      for(int i=1; i<=n/2; i++)
      {
        res=i*(n-i);
        res=res-1;
        sum=0;
        
        for(int j=1; j*j<=res; j++)
        {
          sum=sum+((2*(res/j))-(2*j-1));
        }

        if(i!=n-i)
        {
          sum=sum*2;
        }

        ans=ans+sum;

      }
      cout << ans << endl;
    }
  return 0;
}