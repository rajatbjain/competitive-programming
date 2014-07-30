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

#define d(n) cout << #n << " " << n << endl; //Debugger

bool isOP(char c) {

	if(c=='+'||c=='-'||c=='*'||c=='/') return true;
	else return false;
}

int toNumber(char c) {
	if(c=='0') return 0;
	if(c=='1') return 1;
	if(c=='2') return 2;
	if(c=='3') return 3;
	if(c=='4') return 4;
	if(c=='5') return 5;
	if(c=='6') return 6;
	if(c=='7') return 7;
	if(c=='8') return 8;
	if(c=='9') return 9;
}

bool isNumber (char c) {
	if(c=='0' || c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9') return true;
	else return false;
}

long long power(long long i) {
	long long n=1;
	for(int j=1; j<=i; j++) n *= 10;
		return n;
}

long long VectorToNum(vector< int > &a) {

	reverse(a.begin(), a.end());
	long long num = 0;
	for(int i=0; i<a.size(); i++) {
		num = num + (a[i] * power(i));
	}
	a.clear();
	return num;
}

long long compute(long long a, long long b, char c) {
	if(c == '+') a += b;
	else if(c == '-') a -= b;
	else if(c == '*') a *= b;
	else if(c == '/') a /= b;
	return a;
}

int main() {
	//freopen("input.txt", "r", stdin);
	int t; vector< int >a;
	scanf("%d",&t);
	while(t--) {
		char c, op; long long num, other=-1;
		while( (c = getchar()) && (c != '=') ) {
			
			if( isNumber(c) ) {a.push_back(toNumber(c));}
			
			else if( c == ' ' && !a.empty()) num = VectorToNum(a);
			
			else if ( isOP(c) ) {
				if(other == -1) op = c, other=num;
				else other = compute(other, num, op), op=c;

				getchar();
			}
		}
		long long ans = compute (other, num, op); 
		cout << ans << endl;
	}
}