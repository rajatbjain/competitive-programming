#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <cassert>
#include <climits>
#include <limits>
using namespace std;
#define SIZE(A) ((int)(A.size()))
#define MSET(A,x) memset(A,x,sizeof(A));
#define FILL(A,x) fill(A.begin(),A.end(),x)
#define REP(i,N) for(int i=0;i<(int)(N);i++)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REV(i,a,b) for(int i=(int)(a);i>=(int)(b);i--)
#define TR(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ALL(x) x.begin(),x.end()
#define INF (INT_MAX/2)
#define LLINF (LONG_LONG_MAX/2LL)
#define EPS 1e-12
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({long long t;scanf("%lld",&t);t;})
#define GF ({double t;scanf("%lf",&t);t;})
#define bitCount(n) __builtin_popcount(n)
#define MOD 10000009
#define MAXN 1000005
#define FIX(a) (((a)%MOD+MOD)%MOD)
typedef long long LL;
typedef unsigned long long ULL;
#define pb push_back
int tree[10000005];
int maxVal;

int read(int idx){
    int sum = 0;
    while(idx > 0){
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

void update(int idx, int val){
    while(idx <= maxVal){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}


int main(){
LL t;
scanf("%lld",&t);
printf("\n");
while(t--){
   memset(tree , 0 , sizeof (tree));
   LL n;
   scanf("%lld",&n);
   int a[n];
   maxVal=0;
   FOR(i,0,n){
   scanf("%d",&a[i]);

   maxVal=max(maxVal,a[i]);
   }
   //cout<<maxVal<<endl;
   LL sum=0;
   for(int i=n-1;i>=0;i--)
   {
       sum+=read(a[i]-1);
       update(a[i],1);
       }
    cout<<sum<<endl;
    }

return 0;
}
