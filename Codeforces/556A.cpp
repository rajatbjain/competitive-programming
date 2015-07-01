#include <bits/stdc++.h>

int run(bool);
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 99999999;
    int cnt = 0;
    for(char ch : s) if(ch == '1') cnt++;
    ans = min(ans, cnt);
    cnt = 0;
    for(char ch : s) if(ch == '0') cnt++;
    ans = min(ans, cnt);
    ans += ans;
    cout << n - ans << endl;
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
