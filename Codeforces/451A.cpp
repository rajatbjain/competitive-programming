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

#define FILEREAD(name) freopen(name, "r", stdin)
#define FILEWRITE(name) freopen(name, "w", stdout)
#define PB(value) push_back(value)
#define SIZE(container) container.size()
#define ZEROSET(array) memset(array, 0, sizeof(array))
#define DB(name) cout << #name << ": " << name << endl
#define EPS 0.0000001

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int Min = min(n, m);
	if(Min%2 != 1) cout << "Malvika\n";
	else cout << "Akshat\n";
}