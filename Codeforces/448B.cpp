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

#define d(b) cout << #b << " " << b << endl;

string s, t;

bool hasSameChars() {

	map<char, int> m1, m2;
	for(int i=0; i<s.size(); i++){ 
		m1[s[i]]++;
		m2[t[i]]++;
	}	
	map<char, int>:: iterator it1, it2;
	for(it1 = m1.begin(), it2=m2.begin(); it1!=m1.end() && it2!=m2.end(); it1++, it2++) {
		if((it1->first != it2->first) || (it1->second != it2->second)) return false; 
	}
	return true;

}

bool isASubset() {

	map<char, int>m1, m2;
	for(int i=0; i<s.size(); i++){
		m1[s[i]]++;
	}
	for(int i=0; i<t.size(); i++){
		m2[t[i]]++;
	}

	for(char i = 'a' ; i< 'z'; i++){
		if(m1[i]<m2[i]) {
			return false;
		}
	}
	return true;
}

int main() {
		cin >> s >> t;
		if(s.length()<t.length()) {
			cout << "need tree\n";
			return 0;
		}
		int j=0;
		for(int i=0; s[i]; i++) {
			if(s[i] == t[j]) j++;
		}
		if(j == t.length()) {
			cout << "automaton\n";
			return 0;
		}
	
		if(s.length() == t.length() && hasSameChars()) {
			cout << "array\n";
			return 0;
		}
	
		else if ((s.length()!=t.length()) && isASubset()) {
			cout << "both\n";
			return 0;
		}
	
		else {
			cout << "need tree\n";
		}
}