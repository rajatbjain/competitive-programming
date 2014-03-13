#include <iostream>
using namespace std;

int max (int a, int b)
{
    return a>b?a:b;
}

int main()
{
    int n, x=0, y=0, y1=0, k=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> k;
        if (k > y)
        {
            x++;
            y = k;
        }
        else
        {
            y1 = max(y1, x);
            x=0;
            y=0;
        }

    }
    cout << n-y1 << endl;
}
