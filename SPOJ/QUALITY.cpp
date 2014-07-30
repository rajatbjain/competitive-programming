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
	int s1, s2, s3, a1, a2, a3, number=0;
	while(scanf("%d %d %d %d %d %d",&s1, &s2, &s3, &a1, &a2, &a3) != EOF) {
		long long penalty=0;
		if(s1!=0) penalty = (a1-1)*1200;
		if(s2!=0) penalty += (a2-1)*1200;
		if(s3!=0) penalty += (a3-1)*1200;
		penalty += s1+s2+s3;
		int solved = (s1>0?1:0)+(s2>0?1:0)+(s3>0?1:0);
		cout << "team " << ++number << ": " << solved << ", " << penalty << endl;
	}	
}