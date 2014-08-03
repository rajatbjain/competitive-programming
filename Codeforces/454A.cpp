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
	
	int n;
	cin >> n;
	for(int i=1; i<=n; i+=2) {
		for(int j=0; j < (n-i)/2 ; j++) {
			cout << "*";
		}
		for(int j=0; j<i ; j++) {
			cout << "D";
		}
		for(int j=0; j<(n-i)/2; j++) {
			cout << "*";
		}
		cout << "\n";
	}	

	for(int i=n-2; i>=1; i-=2) {
		for(int j=0; j< (n-i)/2; j++) {
			cout << "*";
		}
		for(int j=0; j<i; j++){
			cout << "D";
		}
		for(int j=0; j<(n-i)/2; j++){
			cout << "*";
		}
		cout << "\n";
	}
}