#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int avg = (a+b+c)/2;
    if((a+b+c - (2*avg))!=0){
        cout << "Impossible\n";
    }
    else {
        int B = avg - a;
        int C = avg - b;
        int A = avg - c;

        if(A>=0 && B>=0 && C>=0){
            cout << A << " " << B << " " << C << endl;
        }
        else {
            cout << "Impossible\n";
        }
    }

}