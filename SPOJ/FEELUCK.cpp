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


#define take_input freopen("input.txt", "r", stdin)

int main() {
	//take_input;
	int t;
	cin >> t;
	for(int i=1; i<=t; i++) {

		cout << "Case #" << i << ":\n";
		string s; int n, mx=0;
		vector < pair<string, int> > v; 
		for(int j=0; j<10; j++) {
			cin >> s >> n;
			v.push_back(make_pair(s, n));
			mx = max(mx, n);
		}

		for(int i=0, sz = v.size(); i<sz; i++) {
			if(v[i].second == mx) cout << v[i].first << endl;
		}
	}

}