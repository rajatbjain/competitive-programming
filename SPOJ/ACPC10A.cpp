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
    {   int a[3];
        cin >> a[0] >> a[1] >> a[2];

        if (a[0] == 0 && a[1] == 0 && a[2] == 0)
        {
            break;
        }
        //add a[0] == a[1] == a[2] case.
        else if (a[1]-a[0] == a[2]-a[1])
        {
            int d = a[1]-a[0];
            cout << "AP " << a[2] + d << endl;
        }

        else if (a[1]/a[0] == a[2]/a[1])
        {
            int r = a[1]/a[0];
            cout << "GP " << a[2]*r << endl;
        }

    }
	return 0;
}
