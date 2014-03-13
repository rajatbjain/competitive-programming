#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    int a[t];
    for (int i=0; i<t; i++)
       {
         scanf("%d",&a[i]);
       }

    sort(a, a+t);

    for (int i=0; i<t; i++)
        {
            printf("%d\n",a[i]);
        }
}
