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
	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		char ac[101];
		map<string, int> M;
		getchar_unlocked();
		for(int i=0; i<n; i++){
			gets(ac);
			M[(string)ac]++;
		}

		map<string, int>::const_iterator it;
		for(it = M.begin(); it!=M.end(); it++){
			cout << it->first << " " << it->second << endl;
		}

		cout << endl;

	}

}