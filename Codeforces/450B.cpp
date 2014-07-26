// Include(s)
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <set>

// Define(s)
#define FILEREAD(name) freopen(name, "r", stdin)
#define FILEWRITE(name) freopen(name, "w", stdout)
#define PB(value) push_back(value)
#define SIZE(container) container.size()
#define ZEROSET(array) memset(array, 0, sizeof(array))
#define DB(name) cout << #name << ": " << name << endl
#define EPS 0.0000001
#define mod 1000000007

// Typedef(s)
typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main() {

	ll x, y;
	cin >> x >> y;
	ll n, f;
	cin >> n;

	/*DB(n);
	if(x<0) {x=x+mod; DB(x);}*/

	if(n>=1) {

		// For 0 and 6
		if(n%6 == 0) f = ( (x-y<0) ? ((x-y)+mod) : ((x-y)%mod) );
		
		// For 1
		if(n%6 == 1) f = ( (x<0) ? (x+mod) : (x%mod) );
		
		// For 2
		if(n%6 == 2) f = ( (y<0) ? (y+mod) : (y%mod) );
		
		// For 3
		if(n%6 == 3) f = ( (y-x<0) ? (y-x+mod) : ((y-x)%mod) );
		
		// For 4
		if(n%6 == 4) f = ( ((-x)<0) ? (mod-x) : ((-x)%mod) );
		
		// For 5
		if(n%6 == 5) f = ( ((-y)<0) ? (mod-y) : ((-y)%mod) );

		f = ((f<0) ? ((f+mod)%mod) : (f%mod)) ;
		
		cout << f << endl;
	}
}