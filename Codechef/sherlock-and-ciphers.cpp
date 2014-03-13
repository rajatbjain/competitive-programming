#include <iostream>
using namespace std;
int main(){
    int t, n, x;
    cin >> t;
    while (t--){
        cin >> n;
        int a[n]; char s[n],temp;
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            x = a[i] - 1;

            temp= s[x];
            s[x]=s[i]; s[i]=temp;
            //s1[i]= s[x];
            //s[x] = s[i];
        }
        for(int i=0; i<n; i++){
            cout<<s[i];
        }
        cout << endl;
    }
}
