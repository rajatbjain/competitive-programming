#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int T, C=1;
    cin >> T;
    while(T--) {
        string si; double num, ans;
        cin >> num >> si;
        if(si == "kg" || si == "lb"){

            if(si == "kg")  {
                ans = num*2.2046;
                printf("%d %.4f lb\n", C, ans);
            }

            else {
                ans = num*0.4536;
                printf("%d %.4f kg\n", C, ans);
            }
        }

        else if (si == "l" || si == "g") {

            if(si == "l") {
                ans = num * 0.2642;
                printf("%d %.4f g\n", C, ans);
            }

            else {
                ans = num * 3.7854;
                printf("%d %.4f l\n", C, ans);
            }
        }
        ++C;
    }

}