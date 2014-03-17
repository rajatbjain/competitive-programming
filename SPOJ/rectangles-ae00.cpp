#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,ans=0;
    cin >> n;
    for(int i=1, upperLimit=sqrt(n);i<=upperLimit;i++)
        ans+=(n/i-i+1);
    cout << ans << "\n";
    return 0;
}
