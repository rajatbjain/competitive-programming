/*
    IMPORTANT POINTERS
    ==================
    1. CIN and COUTs tend to be slower. Use ios::sync_with_stdio(false);
    2. Still SCANF and PRINTFs are faster by a factor of 0.2 seconds.
    3. User getchar_unlocked for the best performance. Also if you are on Windows getchar_unlocked won't be available.
        So include these lines of code:

    #ifndef ONLINE_JUDGE
    #define gc getchar
    #else
    #define gc getchar_unlocked
    #endif
*/

#include <iostream>
#include <cstdio>

using namespace std;
typedef long long ll;

#define gc getchar_unlocked
int getInput()
{
    register char c=gc();
    while(c<'0'||c>'9')
    c=gc();
    int ret=0;
    while(c>='0' && c<='9')
    {
        ret=ret*10+(c-48);
        c=gc();
    }
    return ret;
}

int main()
{
    int n, k, num, cnt=0;
    //ios::sync_with_stdio(false);
    n = getInput();
    k = getInput();
    while(n--)
    {
        num=getInput();
        if (num%k == 0)
        {
            cnt++;
        }
    }
    printf("%d\n",cnt);
}
