#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, m, count=0;
    cin >> n >> m;
    vector< vector<bool> > V (n, vector<bool>(n));

    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        V[u-1][v-1] = V[v-1][u-1] = true;
    }
    int cnt[n]; int cc=0;
    bool flag=true;
    while(flag) {
        flag= false;
        for(int i=0; i<n; i++) {
        cc=0;
        for(int j=0; j<n; j++) {
            if(V[i][j] == 1) {
                cc++;
            }
        }
        cnt[i] = cc;
        }

        for(int i=0; i<n; i++) {
            if(cnt[i] == 1) {
                flag=true;
                for(int j=0; j<n; j++){
                    V[i][j] = V[j][i] = 0;
                }
            }
        }

        if(flag) count++;
    }

    cout << count << endl;


}