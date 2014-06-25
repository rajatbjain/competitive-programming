#include <iostream>
#include <iomanip>
#include <cstdio>
#include <set>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <memory.h>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cassert>
typedef long long ll;
using namespace std;

int main()
{
	ll T, N, M;
	cin >> T;

	while(T--)
    {
        cin >> N >> M;

        if ( N == 1 && M == 1)
        {
            cout << "0/1" << endl;
        }

        else if (!(N%2 && M%2))
        {
            cout  << "1/2" << endl;
        }

        else
        {
            ll totalLower = N*M;
            ll totalUpper = (totalLower-1)/2;

            cout << totalUpper << "/" << totalLower << endl;
        }
    }
    return 0;
}