#include <bits/stdc++.h>

using namespace std;

int n1, n2, k1, k2;
int dp[110][110][3];
bool seen[110][110][3];
const int mod = (int)1e8;


int solve(int n1, int n2, int k) {
    int ret = 0;
    if(seen[n1][n2][k]) {
        ret = dp[n1][n2][k];
    }
    else {
        if(n1 + n2 == 0) {
            seen[n1][n2][k] = true;
            dp[n1][n2][k] = 1;
            ret = dp[n1][n2][k];
        }
        else {
            seen[n1][n2][k] = true;
            int ans = 0;

            if(k == 0) {
                int till = min(n1, k1);
                for(int i = 1; i <= till; i++) {
                    ans = (ans + solve(n1 - i, n2, 1)) % mod;
                }
            }
            else {
                int till = min(n2, k2);
                for(int i = 1; i <= till; i++) {
                    ans = (ans + solve(n1, n2 - i, 0)) % mod;
                }
            }
            dp[n1][n2][k] = ans;
            ret = dp[n1][n2][k];
        }
    }
    return ret;
}


int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    cin >> n1 >> n2 >> k1 >> k2;

    for(int i = 0; i < 110; i++) {
        for(int j = 0; j < 110; j++) {
            for(int k = 0; k < 3; k++) {
                dp[i][j][k] = 0;
                seen[i][j][k] = false;
            }
        }
    }

    dp[n1][n2][0] = solve(n1, n2, 0);
    dp[n1][n2][1] = solve(n1, n2, 1);

    cout << (dp[n1][n2][0] + dp[n1][n2][1]) % mod << endl;
}