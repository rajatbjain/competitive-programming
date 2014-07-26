#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main() {

	long long n; vector<int>binary;
	int len=0;
	cin >> n;
	for(;n!=0;) {
		
		int a = n % (-2);
		n = n / (-2); 
		if(a < 0) {n++;a+=2;}
		binary.push_back(a);
	}

	if(binary.size() == 0) binary.push_back(0);
	else reverse(binary.begin(), binary.end());

	for(int i=0; i<binary.size(); i++) cout << binary[i];
}