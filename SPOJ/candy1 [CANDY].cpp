#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <functional>
#include <utility>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

using namespace std;

int main()
{
	while(1)
	{
        int n, sum=0;
        cin >> n;
        int a[n];
        if (n == -1)
            break;

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        if (sum % n == 0)
        {
            int count = 0;
            int avg = sum / n;
            for (int i=0; i<n; i++)
            {
                if (a[i] > avg)
                {
                    count = count + (a[i]-avg);
                }
            }
            cout << count << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
	}
	return 0;
}
