#include <iostream>
#include <string>
using namespace std;
int main()
{int t=10;while(t--){string str;int count=1;cin>>str;for(int i=0;i<str.size();i++){if(str[i]=='T'||str[i]=='D'||str[i]=='L'||str[i]=='F')count*=2;}	cout<<count<<endl;}}