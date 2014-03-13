#include <iostream>
using namespace std;

int foo (int a, long b){
   long long x=1, y=a;
   while (b>0) {
    if (b%2==1) {
        x = (x*y)%10;
    }
    y=(y*y)%10;
    b=b/2;
   }
     return (x%10);
}

int main (){

    int t, x, z; long y;
    cin >> t;
    for (int i=0; i<t; i++){

        cin >> x >> y;
        z = foo(x,y);
        cout << z << endl;

    }
}

