#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    int N;
    string str,word;
    cin>>N;
    getline(cin,str);
    for(int i=0;i<N;i++){
        int sz=0,cnt=0,maxcnt=0;
        getline(cin,str);
        istringstream iss(str, istringstream::in);
        while(iss>>word){
            if(word.length()==sz) cnt++;
            else{
                sz=word.length();
                cnt=1;
            }
            if(cnt>maxcnt) maxcnt=cnt;
        }
        cout<<maxcnt<<endl;
    }
    return 0;
}