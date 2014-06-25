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

using namespace std;

int main() {
    //freopen("input.txt","r",stdin);
	long long int n, c=0, ans=0, t;
	cin >> n;
	for(long long int i=0; i<n; i++)    {
        cin >> t;
        if(t == 0)  {
            if(c >= ans)    {
                    ans = c;
                }
                c = 0;
        }

        else c++;
    }

    cout << max(ans, c) << endl;

}