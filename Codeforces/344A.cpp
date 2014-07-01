#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
using namespace std;

int main() {

    int N, c, count=1; string str; queue<string> S;
    scanf("%d",&N);

    for(int i=0; i<N-1; i++)
    {
        cin >> str;
        if(i!=0) {
            if(str[0]-'0' == c) c = str[0]-'0';
            else count++;
        }
        c = str[1]-'0';

    }

    cout << count << endl;

}