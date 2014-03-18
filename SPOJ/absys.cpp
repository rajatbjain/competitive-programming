#include<iostream>
//#include <fstream>
using namespace std;

int charToNum(string s)
{
    int num=0;
    for (int i=0; i<s.length(); i++)
    {
        if(!isdigit(s[i]))
        	return -1;

        num=num*10+(s[i]-'0');
    }

    return num;
}
int main()
{
    //freopen("input.txt", "r",stdin);
    //freopen("output.txt", "w", stdout);

	string s1,s2,s3,s4,s5;
    int t,a,b,c;
    cin>>t;
    while(t)
    {
        cin>>s1>>s2>>s3>>s4>>s5;
        a=charToNum(s1);
        b=charToNum(s3);
        c=charToNum(s5);
        if(a == -1)
         	a=c-b;
        if(b == -1)
        	b=c-a;
        if(c == -1)
        	c=a+b;
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }
    return 0;
}
