#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <utility>
#include <functional>
#include <stack>	
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
	int a1, a2, a3, b1, b2, b3, n;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
	int ans=0; 
	ans+= ceil(double(a1+a3+a2)/5);
	ans+= ceil(double(b1+b2+b3)/10);
	if(ans<=n) cout << "YES\n";
	else cout << "NO\n";
}