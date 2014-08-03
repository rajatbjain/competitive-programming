#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>	
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	vector <int> a, b;
	for(int i = 0; i < m; i++) {
		int v;
		cin >> v;
		a.push_back(v); 
		b.push_back(v);
	}

	int mn = 0, mx = 0;
	
	for(int i = 0; i < n; i++) {
		int v = *max_element(a.begin(), a.end());
		int pos = max_element(a.begin(), a.end()) - a.begin();
		mx += v;
		a[pos]--;
	}

	for(int i = 0; i < n; i++) {
		int v = *min_element(b.begin(), b.end());
		int pos = min_element(b.begin(), b.end()) - b.begin();
		mn += v;
		b[pos]--;
		if(b[pos] == 0) b[pos] = 9999;
	}

	cout << mx << " " << mn << endl;
}