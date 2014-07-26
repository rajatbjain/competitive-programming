#include <iostream>
#include <cstdio>
#include <algorithm>

typedef long long int ll;

using namespace std;

int main() {
	while(true) {
		int n;
		cin >> n;
		if(n == 0) break;
		double a[1010], avg=0;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			avg = avg + a[i];
		}
		avg=avg/n;
		double negative=0, positive=0;
		for(int i=0; i<n; i++) {
			double ex = (long) (((a[i] - avg)*100.00)/100.00);
			if (ex < 0) negative += ex;
			else positive += ex;
		}

		negative = -(negative);
		double ans = (positive>negative?positive:negative);
		printf("$%.2f\n",ans);
	}
}