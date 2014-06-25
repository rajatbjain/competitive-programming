#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    while(1) {
        char str[5001] = "";
        int dp[5005] = {0}; dp[0]=1;
        scanf("%s", str);

        if(str[0]-'0'== 0) {
            break;
        }

        int len=strlen(str) ;
        for(int i=1; i<len ; i++) {
            int number = (str[i-1]-'0')*10 + (str[i]-'0');

            if(str[i]-'0' != 0 )
                dp[i] += dp[i-1];
            if(number<=26 && number>9) {
                int pos = (i-2<0?0:i-2);
                dp[i] += dp[pos];
            }

        }
        cout << dp[len-1] << endl;
    }
}
