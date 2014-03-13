#include <iostream>
using namespace std;

int main(){
    int t, x,y, point1, point2, sum1, sum2;
    cin >> t;
    for (int i =0 ; i < t; i++){
        cin >> x >> y;
        sum1 = x+y; sum2 = x+y-1;
        point1=x;
        point2=x-2;

        if (x%2==0 && x==y){
            cout << sum1 << endl;
        }
        else {
            if (x%2==0 && (y==point1 || y==point2)){
                cout << sum1 << endl;
            }
            else if (x%2==1 && (y==point1 || y==point2)){
                cout << sum2 << endl;
            }
            else {
                cout << "No Number" << endl;
            }
        }
    }
}
