#include <iostream>
using namespace std;

int main()
{
    int a[]={5,2,4,6,1,3}, key, j;

    for (int i=1; i<6; i++)
    {
        key = a[i];
        j =i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]= a[j];
            j--;
        }
        a[j+1] = key;
    }

    cout << a[0] << a[1] << a[2] << a[3] << a[4] << a[5];
}
