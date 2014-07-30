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
	int t;
	cin >> t;
	while(t--) {
		long double a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		long double u, v, w;
		//A-F B-E C-D
		u = b*b + c*c - f*f; // A
		v = a*a + c*c - e*e; // B
		w = a*a + b*b - d*d; // C

		double Vol = sqrt( 4*a*a*b*b*c*c - a*a*u*u - b*b*v*v - c*c*w*w + u*v*w );
		Vol /= 12.00;
		printf("%.4lf\n",Vol);

	}
}