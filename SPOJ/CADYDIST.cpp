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
	int n;
 	while(1){
 		cin >> n;
 		if(n == 0) break;
 		unsigned long long c[n], p[n];
 		for(int i=0; i<n; i++)scanf("%llu",&c[i]);
 		for(int i=0; i<n; i++)scanf("%llu",&p[i]);
 		sort(c, c+n);
 		sort(p, p+n);
 		unsigned long long money=0;
 		for(int i=0, j=n-1; i<n; i++,j--) {
 			money+=p[j]*c[i];
 		}
 		printf("%llu",money);
 	}	
}