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
	scanf("%d %d", &n, &m);
	int r = m % ((n*(n+1))/2);
	for(int i=1; i<=n; i++){
		if(r-i >= 0 ) r -= i;
	}
	cout << r << endl;
}