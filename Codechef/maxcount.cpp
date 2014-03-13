#include <iostream>
#include <string.h>
#define MAX 10000
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;

        int a[n], b[MAX+1];

        memset(b, 0, sizeof(b));

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }

        int big = 0, index;

        for (int i=MAX; i>=0; i--)
        {
            if (b[i] >= big)
            {
                big = b[i];
                index = i;
            }
        }

        cout << index << " " <<big << endl;
    }
}
