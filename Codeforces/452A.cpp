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

string s[] = {"jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"};

int main() {
	//freopen("input.txt", "r", stdin);
	string a;
	int n;
	cin >> n >> a;
	
	int flag; bool mismatch=true;
	
	if(n==6){cout << "espeon\n"; return 0;}
	if(n==8){cout << "vaporeon\n"; return 0;}
	
	for(int i=0; i<8; i++) { 
		for(int j=0; j<4; j++) { 
			if(a[j] != '.') {
				//cout << a[j] << " " << s[i][j] << endl;
				if(a[j] == s[i][j]) {
					flag = i; mismatch=true;
				} 
				else {
					mismatch = false;
					break;
				}
			}
			
		}
		if(mismatch == true) break;
	} 

	cout << s[flag] << endl;
}