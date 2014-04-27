#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>

using namespace std;

inline void Read (int *a)
{
    char c = 0;
    while(c<33)
    c = fgetc(stdin);
    *a = 0;
    while(c>33)
    {
               *a = *a*10 + c - '0';
               c = fgetc(stdin);
    }
}

int main()
{
    int n,m;

    Read(&n);
    Read(&m);

    vector <int> str(n,0);
    int a[10][n+1];

    memset(a, 0 , sizeof a);

    for(int i=0;i<n;i++) {
	char ch;
	cin>>ch;
	str[i] = ch - '0';
	for(int j=0;j<10;j++) a[j][i+1] = a[j][i];
	a[str[i]][i+1] += 1;
    }

    while(m--){
	int x,y;
	Read(&x);
	x --;
	y = str[x];
	int sum=0;
	for(int i=0;i<10;i++) {
	    sum += (a[i][x] * abs(y- i));
	}
	cout<<sum<<endl;
    }
    return 0;
}
