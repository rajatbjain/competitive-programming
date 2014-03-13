#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
	char s[50];

	cin.getline(s,50);
	int n = strlen(s);
	for (int i=0; i<n; i++){
		if(i==0){
			putchar(toupper(s[i]));
		}
		if (s[i]== ' ') {
			if (s[i+1] != ' '){
				putchar(toupper(s[i+1]));
			}
			else
				continue;
		}

	}


}
