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
#include <cstring>

using namespace std;

bool b [12345];
int a [12345];

int main() {

    //freopen("in.txt","r", stdin);
    int t, otherID, friendID, c=0;
    cin >> t;
    while(t--)
    {
        cin >> friendID >> otherID;
        b[friendID] = 1;
        for(int i=0, temp; i<otherID; i++)
        {
            cin >> temp;
            a[temp++]=1;
        }
    }

    for(int i=0; i<12345; i++)
    {
        if( b[ i ] == 0 && a[ i ] > 0 )
            ++c;
    }

    cout << c << endl;
}