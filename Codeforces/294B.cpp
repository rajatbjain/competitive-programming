#include <bits/stdc++.h>

using namespace std;

vector< int > one, two;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        if(x == 1) one.push_back(y);
        else two.push_back(y);
    }      
    sort(one.begin(), one.end());
    sort(two.begin(), two.end());
    int ans = INT_MAX;
    int len = one.size() + 2 * two.size();
    for(int f = 0; f <= one.size(); f++) {
        for(int s = 0; s <= two.size(); s++) {
            int total = f + s * 2;
            int sum = 0;
            for(int i = 0; i < one.size(); i++) 
                if(i + f < one.size())
                    sum += one[i];
            for(int i = 0; i < two.size(); i++) 
                if(i + s < two.size())
                    sum += two[i];
            if(sum <= total) {
                ans = min(ans, total);                
            }
        }
    }
    cout << ans << endl;
}