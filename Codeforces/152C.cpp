#include <bits/stdc++.h>

int run(bool);
using namespace std;

string names[110];
int ans[110];

const int mod = (int)1e9 + 7;

int solve() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }
    for(int j = 0; j < m; j++) {
        int has[26];
        fill(has, has + 26, 0);
        for(int i = 0; i < n; i++) {
            has[names[i][j] - 'A']++;
        }
        for(auto x : has) {
            if(x > 0) ans[j]++;
        }
    }
    for(int i = 1; i < m; i++) {
        ans[i] = (ans[i] * 1LL * ans[i - 1]) % mod;
    }
    cout << ans[m - 1] % mod << endl;
    return 0;
}

int main(int argc, char** argv) {
    return run(argc >= 2);
}

int run(bool debugging) {
    if(debugging) {
        string in = "test.in";
        if(fopen(in.c_str(), "r") != NULL) {
            freopen(in.c_str(), "r", stdin);
        }
    }
    int tests = 1;
    for(int cur = 0; cur < tests; cur++) {
        solve();
    }
    return 0;
}
