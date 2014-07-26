#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	//freopen("input.txt", "r", stdin);
	while(1){
		long long I, W;
		cin >> I >> W;

		if((int)I==-1&&(int)W==-1) return 0;

		if(I%1000==0 && W%37==0 && I*37 == W*1000) cout << "Y\n";
		else cout << "N\n";
	}
}