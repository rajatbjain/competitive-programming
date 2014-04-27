#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
    while(1)
    {
        double pi= 3.1415926f;
        int num;
        cin >> num;
        if(num ==0)
            break;
        else
        {
            double ans = (num*num)/(2*pi);
            //cout << setprecision(2) << ans << endl;
            printf("%.2f\n",ans);
        }
    }
}