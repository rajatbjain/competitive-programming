#include <iostream>
typedef long long int64;
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    cout << endl;

    while(testcase--)
        {
            int64 n, sum=0, k;
            cin >> n;

            for (int64 i=0; i<n; i++)
            {
                cin >> k;
                sum = (sum + k)%n;
            }

            if (sum % n == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
	return 0;
}

