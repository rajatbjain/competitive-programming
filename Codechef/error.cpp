#include <iostream>
using namespace std;
int main(){
    int t, count, number, sum;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> number;
        while (number%10>0){
            count++;
        }
    }
    int numArr[count];
    for (int i=0; i<t; i++){
        while(number%10>0){
            int j=0;
            numArr[j] = number%10;
            number=number/10;
            j++;
        }
        for (int k=0; k<count; k++){
            sum= (sum * 100 * (numArr[k+2]))+ (sum * 10 * (numArr[k+1]))+ (numArr[k]);
            if (sum == 010 || sum == 101){
                cout << "Good" << endl;
            }
            else
                cout << "Bad" << endl;
        }

    }
}
