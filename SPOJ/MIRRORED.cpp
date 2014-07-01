#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    cout << "Ready\n";
    while(1) {
        char* a = new char[2];
        gets(a);

        if(a[0] == ' ' && a[1] == ' ') {
            return 0;
        }

        if(((a[0] == 'p' || a[0] == 'q')&&(a[1] == 'q' || a[1] == 'p')) || ((a[0] == 'd' || a[0] == 'b')&&(a[1] == 'b' || a[1] == 'd'))) {
            cout << "Mirrored pair\n";
        }
        else {
            cout << "Ordinary pair\n";
        }
    }
}