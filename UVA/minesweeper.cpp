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
typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int Case = 0;
	while(1) {
		Case++;
		int m, n; scanf("%d%d",&m,&n);
		if(m==0 && n==0) break;
		if(Case>1) cout << "\n";

		char a[123][123]; int b[123][123]={0};
		
		for(int i=1; i<m+1; i++) {
			for(int j=1; j<n+1; j++) {
				cin >> a[i][j];
			}
		}

		for(int i=1; i<m+1; i++) {
			for(int j=1; j<n+1; j++) {
				if(a[i][j] == '*') {
					b[i][j+1]++;
                    b[i+1][j+1]++;
                    b[i+1][j]++;
                    b[i+1][j-1]++;
                    b[i][j-1]++;
                    b[i-1][j-1]++;
                    b[i-1][j]++;
                    b[i-1][j+1]++;
				}	
			}
		}

		printf("Field #%d:\n", Case);

		for(int i=1; i < m+1; i++) {
			for(int j=1; j < n+1; j++) {
				if(a[i][j] == '*') cout << '*';
				else cout << b[i][j];
			}
			cout << '\n';
		}
	}

	return 0;
}


