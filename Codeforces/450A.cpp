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

	int n, m, max_candy=0, pos;
	cin >> n >> m;
	queue< pair<int, int> > Q;
	for(int i=0; i<n; i++) {
		int val;
		cin >> val;
		Q.push(make_pair(i+1, val));
	}
	int lastpos;
	while(!Q.empty()) {
		int front = Q.front().second;
		//DB(front);
		lastpos = Q.front().first;
		//DB(lastpos);
		Q.front().second = Q.front().second-m;
		if(!(Q.front().second<=0)) {
			int val = Q.front().second;
			Q.pop();
			Q.push(make_pair(lastpos, val));
		}
		else {
			Q.pop();
		}
	}

	cout << lastpos << endl;
}
//5 2
//1 3 1 4 2