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

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		unsigned long long n, k, ans=1;
		cin >> n >> k;
		n--;
		k--;
	
		if(n-k < k) k = n-k;
	
		for(long long i=0; i<k; i++) 
			ans = ans * (n-i)/(i+1);
	
		cout << ans << endl;
	}
}