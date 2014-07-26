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

// Typedef(s)
typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main() {
	int i, j;
	while(scanf("%d %d",&i,&j) != EOF) {

		ll max_count=0, count=0, t_i=i, t_j=j;
		if(i>j) swap(i,j);
		for(int cntr = i; cntr <=j; cntr++) {
			count=0;
			ll val = cntr;
			while(val!=1) {
				if((val)&(val-1) != 0) {
					val = ((val*3)+1)>>1;
					count+=2;
				}
				else { 
					val = val >> 1;
					count++;
				}
			}
			if(count>max_count) max_count=count;
		}


		cout << t_i << " " << t_j << " " << max_count+1 << endl;

	}
}