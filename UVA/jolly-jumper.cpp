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
	//freopen("input.txt", "r", stdin);
	int n;
	while(scanf("%d",&n)!=EOF) {

		long long a[3456]; bool c[3456] = {0};
		map<int, int>M;
		
		for(int i=0; i<n; i++) {
			cin >> a[i];
			M[a[i]] = 1;
			if(i!=0) {
				int b = abs(a[i] - a[i-1]);
				c[b] = 1;
			}
		}
		bool flag =  true;
		for(int i=1; i<n; i++) if(c[i] == 0) flag=false;
		if(flag == true) cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
}
/*
INPUT:
	4 1 4 2 3
	5 1 4 2 -1 6
	10 1 2 3 4 5 6 7 8 9 10
	10 1 2 4 7 11 16 22 29 37 46
	10 -1 -2 -4 -7 -11 -16 -22 -29 -37 -46
	10 -1 -1 -4 -7 -11 -16 -22 -29 -37 -46
	1 1
	2 1 2
	2 2 1
	4 0 4 2 3
	4 1 3 2 4
	1 2
	6 1 4 3 7 5 10
	5 3 4 2 3 5
	9 5 6 4 1 -3 2 8 15 7
	9 10 5 1 4 6 12 19 27 36
	9 10 5 1 4 6 12 19 27 26
*/