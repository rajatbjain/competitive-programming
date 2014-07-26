/*
	INPUT:
	1
	..

	5
	... -
	. - -
	S
	S
	S

	2
	...
	.... - - -

	4
	.
	.. - - -
	... -
	- - -

	0
	EXPECTED OUTPUT:

	2
	1231200
	79
	13495
*/
#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#define d(n) cout << #n << " " << n << endl;
using namespace std;

map <string, int> M;

void gen_map() {

	M["S"] = 0;
	M["."] = 1;
	M[".."] = 2;
	M["..."] = 3;
	M["...."] = 4;
	M["-"] = 5;
	M[". -"] = 6;
	M[".. -"] = 7;
	M["... -"] = 8;
	M[".... -"] = 9;
	M["- -"] = 10;
	M[". - -"] = 11;
	M[".. - -"] = 12;
	M["... - -"] = 13;
	M[".... - -"] = 14;
	M["- - -"] = 15;
	M[". - - -"] = 16;
	M[".. - - -"] = 17;
	M["... - - -"] = 18;
	M[".... - - -"] = 19;

}

long long mul (int i) {
	long long a=360;
	if(i==0) return 0;
	if(i==1) return 20;
	if(i==2) return 360;
	for(int n=2 ; n<i ; n++){
		a = a * 20;
	}
	return a;
}

int main() {
	//freopen("input.txt", "r", stdin);
	gen_map();
	while(1){
		int n;
		cin >> n;
		if(n==0)break;
		char s[100]; 
		vector<int> v;
		getchar();
		for(int i=0; i<n; i++) {
			
			gets(s);
			string str(s);
			v.push_back(M[str]);
		}
	
		reverse(v.begin(), v.end()); long long ans=0;
		for(int itr = 0; itr<v.size(); itr++) {
			if(itr==0) ans+=v[itr];
			ans+= v[itr] * mul(itr);
		}
	
		cout << ans << endl;
		getchar();
	}

}